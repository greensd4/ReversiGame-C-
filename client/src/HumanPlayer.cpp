/*
 * HumanPlayer class derived from Player class.
 */

#include <algorithm>
#include "HumanPlayer.h"
//Constructors.
HumanPlayer::HumanPlayer(SIGN sign): sign(sign), numOfSoldiers(2)  {
  this->setSign(sign);
}
HumanPlayer::HumanPlayer(): sign(EMPTY), numOfSoldiers(2) {}
HumanPlayer::HumanPlayer(const HumanPlayer &cp) {
  this->sign = cp.sign;
  this->setSign(cp.sign);
  this->numOfSoldiers = cp.numOfSoldiers;
}
//Get point from user.
Point HumanPlayer::getPointFromPlayer(Board b, vector<Point> v) {
  int row = 0, col = 0;
  cin >> row >> col;
  cin.clear();
  cin.ignore(100, '\n');
  Point p;
  //Checks the values are in the right range.
  if (row > b.getSize() || row <= 0 || col > b.getSize() || col <=0) {
    return p;
  }
  p.setPoint(row, col);
  return p;
}
