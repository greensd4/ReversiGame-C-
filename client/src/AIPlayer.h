/*
 * AIPlayer class derived from Player class.
 */

#ifndef REVERSIGAME_AIPLAYER_H
#define REVERSIGAME_AIPLAYER_H


#include "Player.h"
#include "Board.h"
#include "Rules.h"

class AIPlayer : public Player {
public:
    /**
     * Constructor.
     * @param sign sign.
     */
    explicit AIPlayer(SIGN sign, Rules &r);
    /**
     * Default Constructor.
     */
    AIPlayer();
    /**
     * Copy constructor.
     * @param cp
     */
    AIPlayer(const AIPlayer &cp);
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
    Rules *rules;
};


#endif //REVERSIGAME_AIPLAYER_H