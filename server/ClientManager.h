//
// class of ClientManager.
// in charge of managing all the clients.
//

#ifndef REVERSIGAME_CLIENTMANAGER_H
#define REVERSIGAME_CLIENTMANAGER_H
#include <iostream>
#include <csignal>
#include <string.h>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "CommandManager.h"
#include "GamesList.h"
#include "ThreadPool.h"

using namespace std;

class ClientManager {
public:
    //constructor.
    ClientManager();
    /**
     * handleClient.
     * in charge of handling one client.
     * @param clientSocket - the client socket number to handle.
     */
    void handleClient(int clientSocket);
    /**
     * cancelAllThreads.
     * in charge of closing all threads when server
     * is shut down.
     */
    void cancelAllThreads();
    /**
     * destructor.
     */
    ~ClientManager();
private:
    CommandsManager *cm;
    ThreadPool *tPool;

};


#endif //REVERSIGAME_CLIENTMANAGER_H
