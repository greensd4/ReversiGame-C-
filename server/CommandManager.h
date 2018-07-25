//
// class of CommandManager.
// in charge of managing all the commands.
//

#ifndef REVERSIGAME_COMMANDMANAGER_H
#define REVERSIGAME_COMMANDMANAGER_H

#include <map>
#include <iostream>
#include <csignal>
#include "Command.h"
#include "GamesList.h"
#include "StartCommand.h"
#include "JoinCommand.h"
#include "GamesListCommand.h"
class CommandsManager {
 public:
    /**
     * constructor.
     */
  CommandsManager();
    /**
     * executeCommand.
     * in charge of start executing the command.
     * @param command  - the command to be executed.
     * @param args - the command's args.
     * @param clientSocket - the client socket number who sent the command.
     */
  void executeCommand(string &command, vector<string> &args, int clientSocket);
    /**
     * isCommandValid.
     * checks if the command that was sent is valid.
     * @param command - the command to be checked.
     * @return true if the command is valid and false otherwise.
     */
  bool isCommandValid(string command);
    /**
     * destructor
     */
    ~CommandsManager();
 private:
    //Member
  map<string, Command *> commandsMap;
    /**
     * checks connection to client.
     * @param n the return value from read/write
     * @return true or false
     */
    bool checkConnection(ssize_t n);
};

#endif //REVERSIGAME_COMMANDMANAGER_H
