//
// class of Command.
// command is an abstract class.
//
#include <vector>
#include <string>
#include <unistd.h>
#ifndef REVERSIGAME_COMMAND_H
#define REVERSIGAME_COMMAND_H
using namespace std;
class Command {
 public:
    /**
     * constructor.
     */
  Command();
    /**
     * execute.
     * in charge of executing a single command.
     * @param args - the command's args.
     * @param clientSocket - the client socket number who is sending the command.
     */
  virtual void execute(vector<string> *args, int clientSocket) = 0;
    /**
     * destructor.
     */
  virtual ~Command();
};

#endif //REVERSIGAME_COMMAND_H
