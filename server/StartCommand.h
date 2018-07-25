//
// class of StartCommand.
//

#ifndef REVERSIGAME_GAMECOMMAND_H
#define REVERSIGAME_GAMECOMMAND_H

#include "Command.h"
#include <cstdlib>
#include <iostream>
#include "GameInfo.h"
#include "GamesList.h"

class StartCommand : public Command {
 public:
    /**
     * execute.
     * in charge of executing the StartCommand command.
     * @param args - the command's args.
     * @param clientSocket - the client socket number who is sending the command.
     */
  void execute(vector<string> *args, int clientSocket);
 private:
};

#endif //REVERSIGAME_GAMECOMMAND_H
