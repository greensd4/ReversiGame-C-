//
// server main class.
//


#include <cstdlib>
#include "Server.h"
using namespace std;
int main() {
  try {
    Server server (3124);
    server.start();
      cout << "Enter exit to stop server" << endl;
      string str;
      cin >> str;
      if (str == "exit") {
        server.stop();
      }
    } catch (const char *msg) {
      cout << "Cannot start server. Reason: " << msg << endl;
      exit(-1);
    }
  GamesList::deleteGameList();
}