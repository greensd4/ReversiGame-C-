//
// class of GamesListCommand.
// in charge of sending the client the list og games available.
//
#include <csignal>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include "GamesListCommand.h"
#include "GamesList.h"


void GamesListCommand::execute(vector<string> *args, int clientSocket) {
  //Write to client size of list
  //Write to client size of string and string.
  GamesList *gl = GamesList::getInstance();
  int size   = this->numOfAvGames();
  //sends the size of the list.
  ssize_t n = write(clientSocket, &size, sizeof(size));
  if (n == -1) {
    cout << "Error writing message to client" << endl;
    return;
  }
  if(size > 0) {
    for(int i = 0; i < gl->getSizeOfList(); i++) {
      GameInfo game = gl->getGame(i);
      if(game.isGameAvailable()) {
        string s = game.getName();
        int len = (int) s.size() + 1;
        char name[len];
        strcpy(name, s.c_str());
        n = write(clientSocket, &len, sizeof(len));
        if (n == -1) {
          cout << "Error writing message to client" << endl;
          return;
        }
        n = write(clientSocket, &name, sizeof(name));
        if (n == -1) {
          cout << "Error writing message to client" << endl;
          return;
        }
      }
    }
  }
}

int GamesListCommand::numOfAvGames() {
  int counter = 0;
  GamesList *gl = GamesList::getInstance();
  for(int  i =0; i < gl->getSizeOfList(); i++) {
    if(gl->getGame(i).isGameAvailable()){
      counter++;
    }
  }
  return counter;
}
