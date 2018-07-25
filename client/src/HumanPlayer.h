/*
 * HumanPlayer class derived from Player class.
 */

#ifndef EX2_CONSOLEPLAYER_H
#define EX2_CONSOLEPLAYER_H
#include <iostream>
#include "Player.h"
class HumanPlayer: public Player {
 public:
  /**
   * Constructor.
   * @param sign sign.
   */
  explicit HumanPlayer(SIGN sign);
  /**
   * Default Constructor.
   */
  HumanPlayer();
  /**
   * Copy constructor.
   * @param cp
   */
  HumanPlayer(const HumanPlayer &cp);
  /**
  * getPointFromPlayer.
  * Ask the player to enter a point for the next move.
  * @param b current board.
  * @param v vector of possible moves.
  * @return Point the player chose.
  */
  virtual Point getPointFromPlayer(Board b, vector<Point> v);
private:
    SIGN sign;
    int numOfSoldiers;
};

#endif //EX2_CONSOLEPLAYER_H
