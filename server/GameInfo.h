//
// class of GameInfo.
// in charge of holding details of a game.
//
#include <string>
#include <unistd.h>
#include <iostream>
#ifndef REVERSIGAME_WAITINGGAME_H
#define REVERSIGAME_WAITINGGAME_H
using namespace std;
class GameInfo {
    private:
    bool available;
    int clientSocket1;
    int clientSocket2;
    string name;
    public:
    /**
     * constructor.
     * @param clientSocket - clients socket number who started the game.
     * @param name - name of the game.
     */
    GameInfo(int clientSocket, string name);
    /**
     * addClient2.
     * in charge of adding second client to the game.
     * @param clientSocket - client socket to be added to the game.
     */
    void addClient2(int clientSocket);
    /**
     * getName.
     * @return the name of the game.
     */
    string getName() const;
    /**
     * getClientSocket1.
     * @return the number of client socket 1.
     */
    int getClientSocket1() const;
    /**
     * getClientSocket2.
     * @return the number of client socket 2.
     */
    int getClientSocket2() const;
    /**
     * isGameAvailable.
     * @return true if there is only one player and false if there are two.
     */
    bool isGameAvailable();
    /**
     * closeClients.
     * in charge of closing all the clients socket.
     */
    void closeClients();
    /**
     * printStartMsg.
     * prints a message of a game that started
     * "The game: (name) with players: (clientSocket1)  vs. (clientSocket2) begins now!"
     */
    void printStartMsg();
    /**
     * prints a message when a game ends
     * "The game: (name) has ended"
     */
    void printEndMsg();
    /**
     * operator==.
     * @param gameInfo - another game info.
     * @return true if the games are the same.
     */
    bool operator==(const GameInfo &gameInfo) const;

};

#endif //REVERSIGAME_WAITINGGAME_H
