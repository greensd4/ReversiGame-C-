//
// class of GamesList.
// this class is a singleton.
//

#include <cstdlib>
#include "GamesList.h"
GamesList::GamesList() {
    this->gi = new vector<GameInfo>;
}
pthread_mutex_t GamesList::lockAdd;
int GamesList::addGame(GameInfo &gameInfo) {
    pthread_mutex_lock(&lockAdd);
    for(int i = 0; i < gi->size(); i++) {
        if (gameInfo.getName() == this->getGame(i).getName() && this->getGame(i).isGameAvailable()) {
            return -1;
        }
    }
    this->gi->push_back(gameInfo);
    pthread_mutex_unlock(&lockAdd);
    return 0;
}
int GamesList::getSizeOfList() {
    return (int) this->gi->size();
}
GameInfo& GamesList::getGame(int i) {
    return this->gi->at(i);
}


GameInfo& GamesList::getGameBySocket1(int clientSocket) {
    for(int i = 0; i < this->getSizeOfList(); i++){
        if(clientSocket == this->getGame(i).getClientSocket1()){
            return getGame(i);
        }
    }
}
void GamesList::deleteGame(GameInfo &gameInfo) {
    for(int i = 0; i < gi->size(); i++) {
        if (gameInfo == gi->at(i)) {
            gameInfo.closeClients();
            this->gi->erase(this->gi->begin() + i);
            return;
        }
    }
}

pthread_mutex_t GamesList::lockInstance;
GamesList* GamesList::instance;
GamesList* GamesList::getInstance() {
    if(instance == 0) {

        pthread_mutex_lock(&lockInstance);
        if (instance == 0) {
            instance = new GamesList();
        }
        pthread_mutex_unlock(&lockInstance);

    }
    return instance;

}

bool GamesList::isGameExist(int clientSocket1) {
    for(int i = 0; i < gi->size(); i++) {
        if (clientSocket1 == this->getGame(i).getClientSocket1()) {
            return true;
        }
    }
    return false;
}
void GamesList::deleteGameList() {
    if(instance != 0){
        delete instance;
    }
}
GamesList::~GamesList() {
    delete this->gi;
}
GamesList::GamesList(const GamesList &gl) {
  this->instance = gl.instance;
  this->gi = gl.gi;
}