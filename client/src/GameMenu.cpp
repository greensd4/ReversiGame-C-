/*
* GameMenu source file.
*/

#include <sstream>
#include "GameMenu.h"
#include "AIPlayer.h"
#include "RegularRules.h"
#include "NetworkPlayer.h"
#include "NetworkReadPlayer.h"


GameMenu::GameMenu(Display &display) {
    this->d = &display;
    this->isQuit = false;
}
Game* GameMenu::showMenu() {
    int boardSize = 0,rules = 0,type = 0;
    //Show menu with display and change the values of board rules and type.
    this->d->showMenu(type, rules, boardSize);
    if(type == 4) {
        b = new Board();
        this->isQuit = true;
        this->p1 = new HumanPlayer(XSIGN);
        this->p2 = new HumanPlayer(OSIGN);
        this->r = new RegularRules();
        gtype = PvsP;
        return NULL;
    }
    //Creating the wanted game.
    switch (rules) {
        case 1: {
            this->r = new RegularRules;
            break;
        }
        default:{
            this->r = new RegularRules;
            break;
        }
    }
    switch(type) {
        case 1: {
            this->p1 = new HumanPlayer(XSIGN);
            this->p2 = new HumanPlayer(OSIGN);
            gtype = PvsP;
            break;
        }
        case 2: {
            this->p1 = new HumanPlayer(XSIGN);
            this->p2 = new AIPlayer(OSIGN, *(this->r));
            gtype = PvsAI;
            break;
        }
        case 3: {
            try {
                gtype = PvsRP;
                string command;
                client = new Client("127.0.0.1", 3124, *this->d);
                this->p1 = new NetworkPlayer(*client);
                this->p2 = new NetworkReadPlayer(*client);
                while (true) {
                    this->d->showSubMenu(command);
                    this->client->sendCommand(command);
                    bool startGame = this->getInformationFromServer(command);
                    if (startGame) {
                        break;
                    }
                }
                }catch (const char* msg) {
                    b = new Board();
                    p1 = new HumanPlayer();
                    p2 = new HumanPlayer();
                    r = new RegularRules();
                    return NULL;
                }
                //Waits for other player.
                if(client->getNum() == -1) {
                    boardSize = -1;
                  this->d->showMessage("Problem in connection to the other player");
                    break;
                } else {
                    break;
                }
            }
            default:{
                this->p1 = new HumanPlayer(XSIGN);
                this->p2 = new HumanPlayer(OSIGN);
                gtype = PvsP;
                break;
            }
        }
            this->b = new Board(boardSize);
            this->game = new Game(*this->b, *this->p1, *this->p2, *this->r, *this->d, gtype);
            return game;
    }

    bool GameMenu::getInformationFromServer(string command) {
      char str[command.size()];
      strcpy(str, command.c_str());
        //String of message
        istringstream iss(str);
        //First word for command.
        string s;
        iss >> s;
      int res = this->client->getNum();
      if (s == "start") {
          if(res != -1){
            this->p1->setSign(XSIGN);
            this->p2->setSign(OSIGN);
            d->showMessage("waiting for other Player to connect...");
            this->client->getNum();
            return true;
          }
          d->showMessage("Please enter valid name");
          return false;
        }
        if (s == "join") {
            if (res == -1) {
                return false;
            }
            //this->client->getMessage();
            this->p1->setSign(OSIGN);
            this->p2->setSign(XSIGN);
            return true;
        }
        if (s == "list_games") {
            if(res == 0) {
              this->d->showMessage("There are no open games");
            } else {
              for (int i = 0; i < res; i++) {
                d->showMessage(client->getMessage());
              }
            }
          return false;
        }
        d->showMessage("Please enter a valid command.");
        return false;
    }
bool GameMenu::toEndGAME() { return isQuit; }

//Destructor.
    GameMenu::~GameMenu() {
        if(gtype == PvsRP) {
            delete client;
        }
        delete b;
        delete p1;
        delete p2;
        delete r;
    }