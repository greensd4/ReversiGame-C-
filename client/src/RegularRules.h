/*
* Regular rules header file. Derived from Rules.
*/

#ifndef REVERSIGAME_REGULARRULES_H
#define REVERSIGAME_REGULARRULES_H

#include "Rules.h"
#include "Sign.h"

class RegularRules : public Rules {
 public:
  /**
   * Checks the point is valid and check every direction from the point.
   * @param b board.
   * @param p point to check.
   * @param sign sign of the player.
   * @return boolean.
   */
  bool checkPoint(const Board b,const Point p, SIGN sign) const;
 private:
  /**
   * Checks one direction from a given point.
   * @param b board.
   * @param p point.
   * @param sign players sign.
   * @param jumpRow row way.
   * @param jumpCol col way.
   * @return boolean.
   */
  bool checkInDirection(Board b,const Point p, SIGN sign, int jumpRow, int jumpCol) const;
};

#endif //REVERSIGAME_REGULARRULES_H
