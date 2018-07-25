/*
* Class for Board.
*/


#ifndef EX1_BOARD_H
#define EX1_BOARD_H

#include <vector>
#include "Point.h"
#include "Sign.h"
#include <iostream>

using namespace std;

class Board {
 private:
  //Members.
  Sign **board;
  int size;
  int freeSquares;
  /**
   * Initalize the board.
   */
  void setBoard();
 public:
  /**
   * Constructor.
   * @param size size of the board.
   */
  explicit Board(int size);
  /**
   * Default constructor.
   */
  Board();
  /**
   * Copy constructor.
   * @param b another board.
   */
  Board(const Board& b);
  /**
   * Destructor.
   */
  ~Board();
  /**
   * getSize.
   * @return board's size.
   */
  int getSize() const;
  /**
   * getBoard.
   * @return board 2d array.
   */
  Sign** getBoard();
  /**
   * addToBoard.
   * adds char c to board by row and col.
   * @param sign sign.
   * @param row x value.
   * @param col y value.
   */
  void addToBoard(SIGN sign, int row, int col);
  /**
   * hasSpaceOnBoard.
   * checks if the board is not full.
   * @return boolean
   */
  bool hasSpaceOnBoard() const;
  /**
   * flip.
   * Gets point to start from and direction, if there is a row with opp's
   * signs and at the end player's sign then flip them.
   * returns how many were flipped.
   * @param start point to start from.
   * @param player sign of the current player.
   * @param jumpRow direction on x values.
   * @param jumpCol direction on y values.
   * @return how many opp's signs were flipped.
   */
  int flip(Point start, SIGN sign, int jumpRow, int jumpCol);
  /**
   * operator =.
   * Assignment operator, shallow copy.
   * @param b another board.
   * @return new Board.
   */
  Board& operator =(const Board &b);
  /**
   * operator out for printing.
   * @param out ostream object.
   * @param b board.
   * @return ostream object.
   */
  friend ostream& operator <<(ostream &out, const Board &b);
};


#endif //EX1_BOARD_H