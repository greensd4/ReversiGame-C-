/*
* Rules header file.
*/

#ifndef REVERSIGAME_RULES_H
#define REVERSIGAME_RULES_H

#include "Board.h"
#include "Sign.h"

class Rules {
 public:
  /**
   * Checks if point is valid for user or not to choose it.
   * @param b board.
   * @param p point to check.
   * @param sign player's sign.
   * @return boolean.
   */
  virtual bool checkPoint(Board b, Point p, SIGN sign) const = 0;
};

#endif //REVERSIGAME_RULES_H
