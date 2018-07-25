//
// class of CommandManager.
// in charge of managing all the commands.
//


#include "CommandManager.h"

CommandsManager::CommandsManager() {
  commandsMap["start"] = new StartCommand();
  commandsMap["join"] = new JoinCommand();
  commandsMap["list_games"] = new GamesListCommand();

}
void CommandsManager::executeCommand(string &command, vector<string> &args, int clientSocket) {
  signal(SIGPIPE, SIG_IGN);
  try {
    if (this->isCommandValid(command)) {
      Command *commandObj = commandsMap[command];
      commandObj->execute(&args, clientSocket);
    } else {
      cout << "unknown command" << endl;
      int res = -1;
      ssize_t n = write(clientSocket, &res, sizeof(res));
      if (!checkConnection(n)) {
        return;
      }
    }
  } catch (char const* msg) {
    throw msg;
  }
}
CommandsManager::~CommandsManager() {
  map<string, Command *>::iterator it;
  for (it = commandsMap.begin(); it != commandsMap.end(); it++) {
    delete it->second;
  }
}
bool CommandsManager::isCommandValid(string command) {
  map<string, Command*>::iterator it;
  for(it = commandsMap.begin(); it != commandsMap.end(); it++) {
    if(it->first == command){
      return true;
    }
  }
  return false;
}

bool CommandsManager::checkConnection(ssize_t n) {
  if (n == 0 || n == -1) {
    cout << "Player disconnected" << endl;
    return false;
  }
  return true;
}