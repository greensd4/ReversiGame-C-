/*
* Class for NetworkPlayer.
*/

#ifndef REVERSIGAME_NETWORKPLAYER_H
#define REVERSIGAME_NETWORKPLAYER_H


#include "Player.h"
#include "AIPlayer.h"
#include "Client.h"

class NetworkPlayer : public Player {
    public:
        /**
         * Default Constructor.
         */
        NetworkPlayer(Client &client);
        /**
         * Copy constructor.
         * @param cp
         */
        NetworkPlayer(const NetworkPlayer &cp);
        /**
         * getPointFromPlayer.
         * Ask the player to enter a point for the next move.
         * @param b current board.
         * @param v vector of possible moves.
         * @return Point the player chose.
         */
        Point getPointFromPlayer(Board b, vector<Point> v);

  private:
        SIGN sign;
        int numOfSoldiers;
        Client *client;
        bool checkVecHasPoint(vector<Point> &v, Point &p);
    };

#endif //REVERSIGAME_NETWORKPLAYER_H
