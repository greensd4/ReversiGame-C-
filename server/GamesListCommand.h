//
// class of GamesListCommand.
// in charge of sending the client the list og games available.
//

#ifndef REVERSIGAME_GAMESLISTCOMMAND_H
#define REVERSIGAME_GAMESLISTCOMMAND_H

#include "Command.h"
class GamesListCommand : public Command {
 public:
    /**
     * execute.
     * in charge of executing the GameListCommand command.
     * @param args - the command's args.
     * @param clientSocket - the client socket number who is sending the command.
     */
  void execute(vector<string> *args, int clientSocket);
 private:
  int numOfAvGames();
};

#endif //REVERSIGAME_GAMESLISTCOMMAND_H
