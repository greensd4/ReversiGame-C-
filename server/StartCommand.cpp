//
// class of StartCommand.
//
#include "StartCommand.h"


/**
 * args suppose to have the first client socket and the name he waants tog
 * give to the game, then we add that to the server.
 * @param args
 */
void StartCommand::execute(vector<string> *args, int clientSocket) {
  GamesList* gamesList = GamesList::getInstance();
  string name = args->front();
  int res;
  if(name == ""){
    res = -1;
  }
  else {
    GameInfo gi(clientSocket, name);
    res = gamesList->addGame(gi);
    //notify user command was made (-1 for error).
  }
  ssize_t n = write(clientSocket, &res, sizeof(res));
  if (n == -1) {
    cout << "Error writing message to client" << endl;
    return;
  }
}