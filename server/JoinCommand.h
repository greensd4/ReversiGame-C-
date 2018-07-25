//
// class of JoinCommand.
// in charge of the JoinCommand command.
//

#ifndef REVERSIGAME_JOINCOMMAND_H
#define REVERSIGAME_JOINCOMMAND_H
#include <cstdlib>
#include <csignal>
#include <string.h>
#include <iostream>
#include "Command.h"
#include "GameInfo.h"
class JoinCommand : public Command {
 public:
    /**
     * execute.
     * in charge of executing the JoinCommand command.
     * @param args - the command's args.
     * @param clientSocket - the client socket number who is sending the command.
     */
    void execute(vector<string> *args, int clientSocket);
    /**
     * handleClients.
     * in charge of the game's logic.
     * @param gameInfo the game to be handled.
     */
    void handleClients(GameInfo gameInfo);
    /**
     * handlePlayingClient.
     * in charge of reading a message from client.
     * @param clientSocket - client socket number to read from.
     * @param message - message to be read.
     */
    void handlePlayingClient(int clientSocket, string &message);
    /**
     * checkConnection.
     * @param n - the read/write function return val.
     * @return true if there is a connection with client and false otherwise.
     */
    bool checkConnection(ssize_t n);
    /**
     * endGame.
     * checks if the game is over.
     * @param point - point to check if its an EndOfGame point.
     * @return true if the game ended and false otherwise.
     */
    bool endGame(string &point);
    /**
     * badMove.
     * checks if the move wasn't legal.
     * @param point = the move to be checked.
     * @return true if the move was illegal and false if legal.
     */
    bool badMove(string &point);
    /**
     * deleteGameFromList.
     * in charge of deleting the game when done.
     * @param g - the game to be deleted.
     */
    void deleteGameFromList(GameInfo &g);
    /**
     * setPlayer.
     * in charge of letting the client know that the game have started.
     * @param clientSocket - client socket number to be set.
     * @param numTurn - the turn number of the client.
     */
    void setPlayer(int clientSocket, int numTurn);
    /**
     * readFromClient.
     * in charge of reading from client.
     * @param clientSocket - client socket to read from.
     * @param msg - the message to be read to.
     * @return - the read result.
     */
    ssize_t readFromClient(int clientSocket, string &msg);
    /**
     * writeToClient.
     * in charge of writing integers to the client.
     * @param clientSocket client socket to write to.
     * @param num - the number to be written.
     * @return the write result.
     */
    ssize_t writeToClient(int clientSocket, int num);
    /**
     * writeToClient.
     * in charge of writing messages to the client.
     * @param clientSocket client socket to write to.
     * @param num - the message to be written.
     * @return the write result.
     */
    ssize_t writeToClient(int clientSocket, string msg);
 private:
    bool connection;
};

#endif //REVERSIGAME_JOINCOMMAND_H
