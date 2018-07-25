//
// class of GamesList.
// this class is a singleton.
//

#ifndef REVERSIGAME_GAMESLIST_H
#define REVERSIGAME_GAMESLIST_H
#include<vector>
#include <string>
#include "GameInfo.h"
using namespace std;
class GamesList {
public:
    /**
     * getInstance.
     * @return an instance of the games list.
     */
  static GamesList* getInstance();
    /**
     * deleteGameList.
     * deletes the games list when exit.
     */
  static void deleteGameList();
    /**
     * addGame.
     * @param gameInfo - a game to add to the GamesList.
     * @return 0 if the game can be added to the list and -1 otherwise.
     */
  int addGame(GameInfo &gameInfo);
    /**
     * getGame.
     * @param i - index of the game wanted.
     * @return the game info that in the i's place in the list.
     */
  GameInfo& getGame(int i);
    /**
     * getGameBySocket1.
     * @param clientSocket- client socket that refers to the game wanted.
     * @return the game of the client socket
     */
  GameInfo& getGameBySocket1(int clientSocket);
  /**
   * isGameExist.
   * checks if the game wanted is available.
   * @param clientSocket1 - client socket number to check if exist.
   * @return true id the game exists and false otherwise.
   */
  bool isGameExist(int clientSocket1);
    /**
     * getSizeOfList.
     * @return the number of games in the list.
     */
  int getSizeOfList();
  /**
   * deleteGame.
   * @param gameInfo - the game to be deleted.
   */
  void deleteGame(GameInfo &gameInfo);
private:
    /**
     * constructor
     */
    GamesList();
    /**
     * copy constructor
     */
    GamesList(const GamesList &);
    /**
     * destructor
     */
    ~GamesList();
    //members
    vector<GameInfo> *gi ;
    static GamesList* instance;
    static pthread_mutex_t lockInstance;
    static pthread_mutex_t lockAdd;


};

#endif //REVERSIGAME_GAMESLIST_H
