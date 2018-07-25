//
// class of server.
//


#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <fstream>
#include <complex>
#include <iostream>
#include <unistd.h>
#include <vector>
#include "ClientManager.h"
#include "ThreadPool.h"

using namespace std;

class Server {
public:
    /**
     * constructor.
     * @param port - the server port number.
     */
    Server(int port);
    /**
     * default constructor.
     */
    Server();
    /**
     * destructor.
     */
  ~Server();
    /**
     * start.
     * in charge of starting the server.
     */
    void start();
    /**
     * stop.
     * in charge of stopping the server.
     */
    void stop();
 private:
    int port;
    ClientManager *cm;
    pthread_t serverThreadId;
    int serverSocket; // the socket's file descriptor
    int getPortFromFile(string path);
};

#endif //SERVER_SERVER_H