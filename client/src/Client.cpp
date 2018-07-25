//
// Client.cpp
// class of client is charge of handling client with a server.
//

#include <sys/socket.h>
#include "Client.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <csignal>

using namespace std;
#define CLASS_PATH "../exe/ClientSettings.txt"

Client::Client(const char *serverIP, int serverPort, Display &display):
    serverIP(serverIP), serverPort(serverPort), clientSocket(0),turnNum(0), display(&display) { }
Client::Client(Display &display): clientSocket(0), turnNum(0), display(&display) {
    getSettingsFromFile();
}

void Client::connectToServer() {
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        display->showMessage("Error opening socket");
        throw "Error opening socket";
    }
    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
      display->showMessage("Can't parse IP address");
        throw "Can't parse IP address";
    }

    struct hostent *server;
    server = gethostbyaddr((const void *)&address, sizeof address, AF_INET);
    if (server == NULL) {
      display->showMessage("Host is unreachable");
        throw "Host is unreachable";
    }

    struct sockaddr_in serverAddress;
    bzero((char *)&address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *)&serverAddress.sin_addr.s_addr, server->h_addr, server->h_length);

    serverAddress.sin_port = htons(serverPort);

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) == -1) {
      display->showMessage("Error connecting to server");
        throw "Error connecting to server";
    }
    //connections confirmation.
    display->showMessage("Connected to server");
    connection = true;
}
void Client::sendMove(Point move) {
  signal(SIGPIPE, SIG_IGN);
    try {
        string m = move.toString();
        int size = (int) m.size() + 1;
        char message[size];
        strcpy(message, m.c_str());
        ssize_t n = write(clientSocket, &size, sizeof(size));
        if (n == -1) {
            throw "Error writing turn to socket";
        }
        if (!checkConnection(n)) {
            return;
        }
        n = write(clientSocket, &message, sizeof(message));
        if (n == -1) {
            throw "Error writing turn to socket";
        }
        if (!checkConnection(n)) {
            return;
        }
    }catch (char const* msg) {
        display->showMessage(msg);
    }
}
void Client::sendCommand(string command) {
  signal(SIGPIPE, SIG_IGN);
    try {
        int size = (int) command.size() + 1;
        char message[size];
        bzero((char*)&message,sizeof(message));
        strcpy(message, command.c_str());
        ssize_t n = write(clientSocket, &size, sizeof(size));
        if (n == -1) {
            throw "Error writing turn to socket";
        }
        if(!checkConnection(n)){
            return;
        }
        ssize_t n2 = write(clientSocket, &message, sizeof(message));
        if (n2 == -1) {
            throw "Error writing turn to socket";
        }
        if(!checkConnection(n)){
            return;
        }
    }
    catch (char const* msg) {
        display->showMessage(msg);
    }
}

Point Client::getMove() {
  signal(SIGPIPE, SIG_IGN);
    int size;
    ssize_t n = read(clientSocket, &size, sizeof(size));
    if (n == -1) {
        throw "Error reading turn from socket";
    }
  if(!checkConnection(n)){
    return Point(-1,-1);
  }
    char point[size];
    ssize_t n2 = read(clientSocket, &point, sizeof(point));
  if (n2 == -1) {
    throw "Error reading turn from socket";
  }
  if(!checkConnection(n2)){
    return Point(-1,-1);
  }
    Point p1(point);
    return p1;
}

int Client::getNum() {
  signal(SIGPIPE, SIG_IGN);
  int num = 0;
  ssize_t n = read(clientSocket, &num, sizeof(int));
  if (n == -1){
    throw "Error in getting sign";
  }
  if(!checkConnection(n)){
    return -1;
  }
  return num;
}

string Client::getMessage() {
  signal(SIGPIPE, SIG_IGN);
  int size = 0;
  ssize_t n = read(clientSocket, &size, sizeof(size));
  if (n == -1) {
    throw "Error in reading message";
  }
  if(!checkConnection(n)){
    return "no connection";
  }
  char c[size];
    bzero((void *)&c, sizeof(c));
  n = read(clientSocket,&c,sizeof(c));
  if (n == -1) {
    throw "Error in reading message";
  }
  if(!checkConnection(n)){
    return "no connection";
  }
  string m = c;
  return m;
}

void Client::getSettingsFromFile() {
    ifstream file;
    file.open(CLASS_PATH);
    if (!file.is_open()) {
        throw "Couldn't open information file.";
    }
    string line;
    istringstream iss;
    //gets ip
    while (getline(file, line, ':')) {
        if (line == "server") {
            getline(file, line, '\n');
            char* iP = new char[line.size()];
            std::copy(line.begin(), line.end(), iP);
            this->serverIP = (const char*) iP;
        }
            // gets port.
        else if (line == "port") {
            getline(file, line, '\n');
            istringstream iss(line);
            iss >> this->serverPort;
        }
    }
  file.close();
}


bool Client::checkConnection(ssize_t n) {
  signal(SIGPIPE, SIG_IGN);
  if (n == 0) {
    connection = false;
  }
  return connection;
}
bool Client::getConnection() {
  return connection;
}