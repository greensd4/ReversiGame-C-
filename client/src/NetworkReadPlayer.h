/*
* Class for NetworkReadPlayer.
*/

#ifndef REVERSIGAME_NETWORKREADPLAYER_H
#define REVERSIGAME_NETWORKREADPLAYER_H

#include "Player.h"
#include "Client.h"
class NetworkReadPlayer: public Player {
 public:
    /**
     * copy constructor.
     * @param c - the client to be copied.
     */
  NetworkReadPlayer(Client &c);
    /**
     * getPointFromPlayer.
     * @param b - the game's board.
     * @param v - the list of possible moves.
     * @return - the point that the other player played.
     */
  Point getPointFromPlayer(Board b, vector<Point> v);
 private:
  Client *client;
  SIGN sign;
  int numOfSoldiers;
};

#endif //REVERSIGAME_NETWORKREADPLAYER_H
