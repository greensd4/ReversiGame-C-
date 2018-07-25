//
// class of server.
//
#include "Server.h"



#define MAX_CONNECTED_CLIENTS 10
#define CLASS_PATH "../exe/ServerSettings.txt"

static void* acceptClient(void*);

struct ConnectingArgs {
      ClientManager* clientManager;
      int socketServer;
  };
using namespace std;

Server::Server(int port): port(port), serverSocket(0),
                          cm(new ClientManager) {}

Server::Server(): serverSocket(0), port(getPortFromFile(CLASS_PATH)),
                  cm(new ClientManager){}

Server::~Server() {
  delete  cm;
}

void Server::start() {

  // Create a socket point
  serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  if (serverSocket == -1) {
    throw "Error opening socket";
  }
  // Assign a local address to the socket
  struct sockaddr_in serverAddress;
  bzero((void *) &serverAddress,
        sizeof(serverAddress));
  serverAddress.sin_family = AF_INET;
  serverAddress.sin_addr.s_addr = INADDR_ANY;
  serverAddress.sin_port = htons(port);
  if (bind(serverSocket, (struct sockaddr
  *) &serverAddress, sizeof(serverAddress)) == -1) {
    throw "Error on binding";
  }
  ConnectingArgs* ca = new ConnectingArgs;
  ca->socketServer =  serverSocket;
  ca->clientManager = cm;
  // Start listening to incoming connections
  listen(serverSocket, MAX_CONNECTED_CLIENTS);
  int rc = pthread_create(&serverThreadId, NULL, acceptClient , (void *) ca);
  if(rc){
    cout << "Error: unable to create thread, " << rc << endl;
    exit(-1);
  }
}

void Server::stop() {
  this->cm->cancelAllThreads();
  pthread_cancel(serverThreadId);
  close(this->serverSocket);
}

int Server::getPortFromFile(string path) {
  int port = 0;
  ifstream file;
  file.open(path.c_str());
  if (!file.is_open()) {
    throw "Couldn't open information file.";
  }
  string line;
  while (getline(file, line, ':')) {
    if (line == "port") {
      getline(file, line, '\n');
      istringstream iss(line);
      iss >> port;
      break;
    }
  }
  file.close();
  return port;
}

static void* acceptClient(void *args) {
  ConnectingArgs* ca = (ConnectingArgs *) args;
  int serverSocket = ca->socketServer;
  struct sockaddr_in clientAddress;
  socklen_t clientAddressLen;
  while (true) {
    cout << "Waiting for client connections..." << endl;
    // Accept a new cli ent connection
    int clientSocket = accept(serverSocket, (struct
        sockaddr *) &clientAddress, &clientAddressLen);
    cout << "Client connected" << endl;
    if (clientSocket == -1) {
      char msg[] = "Error on accept";
      throw msg;
    }
    ca->clientManager->handleClient(clientSocket);
  }
}