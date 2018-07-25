/**
 * Regular rules source file. Derived from Rules.
 */
#include "RegularRules.h"
bool RegularRules::checkPoint(const Board b,const Point p, SIGN sign) const {
  //Checks if the point has legal values.
  if (p.getX() < 0 || p.getY() <0) {
    return false;
  }
  //Checks every direction from the point.
  for(int i = -1; i < 2; i++) {
    for(int j = -1; j < 2; j++) {
      if( i == 0 && j ==0) {
        continue;
      }
      if(checkInDirection(b, p, sign, i, j)){
        return true;
      }
    }
  }
  return false;
}
bool RegularRules::checkInDirection(Board b,const Point p, SIGN sign, int jumpRow, int jumpCol) const {
  int row = p.getX() + jumpRow;
  int col = p.getY() + jumpCol;
  //Check the first next cell.
  if(row >= b.getSize() || col >= b.getSize() || row == 0 || col == 0) {
    return false;
  }
  //Try to find another cell with the same sign.
  if(b.getBoard()[row][col].getSign() != sign) {
    while (b.getBoard()[row][col].getSign() != sign) {
      SIGN s = b.getBoard()[row][col].getSign();
      if (s == EMPTY ) { return false; }
      row += jumpRow;
      col += jumpCol;
      if(row >= b.getSize() || col >= b.getSize() || row == 0 || col == 0) {
        return false;
      }
    }
    return true;
  }
  return false;
}
