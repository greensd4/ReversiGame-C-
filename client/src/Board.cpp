/*
 * Board's source file.
 */
#include "Sign.h"
#include "Board.h"

//Constructors.
Board::Board(int size): size(size + 1), freeSquares((size * size) - 4) {
  this->board = new Sign*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new Sign[this->size];
  }
  setBoard();
}
Board::Board(): size(9), freeSquares(60) {
  this->board = new Sign*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new Sign[this->size];
  }
  setBoard();
}
Board::Board(const Board &b) {
  this->size = b.size;
  this->freeSquares = b.freeSquares;
  this->board = new Sign*[this->size];
  for(int i = 0; i < this->size; i++){
    this->board[i] = new Sign[this->size];
  }
  for(int i = 0; i < this->size; i++){
    for (int j = 0; j< this->size; j++) {
      this->board[i][j] = b.board[i][j];
    }
  }
}
Board& Board::operator=(const Board &b) {
  if (this != &b) {
    //Deleting this board for alloctaing new one.
    for(int i = 0; i < this->size; i++) {
      delete[] this->board[i];
    }
    delete this->board;
    this->size = b.size;
    this->freeSquares = b.freeSquares;
    //Allocating new board.
    this->board = new Sign*[this->size];
    for (int i = 0; i < this->size ; i++) {
      this->board[i] = new Sign[this->size];
    }
    for(int i = 0; i < this->size; i++) {
      for(int j = 0; j < this->size; j++) {
        this->board[i][j] = b.board[i][j];
      }
    }
  }
  return *this;
}
//Initalizing the new Board.
void Board::setBoard() {
  for(int i = 0; i < this->size ; i++) {
    for (int j = 0; j < this->size; j++) {
      this->board[i][j].setSign(EMPTY);
    }
  }
  int mid = (this->size / 2);
  this->board[mid][mid].setSign(OSIGN);
  this->board[mid + 1][mid + 1].setSign(OSIGN);
  this->board[mid + 1][mid].setSign(XSIGN);
  this->board[mid][mid + 1].setSign(XSIGN);
}
//Destructor.
Board::~Board()  {

  for(int i = 0; i < this->size; i++) {
    delete[] this->board[i];
  }
  delete[] this->board;
}
//Getters.
Sign** Board::getBoard() {
  return this->board;
}
int Board::getSize() const { return this->size; }
//Adding to board.
void Board::addToBoard(SIGN sign, int row, int col) {
  this->board[row][col].setSign(sign);
  this->freeSquares--;
}
//Checks if board is not full.
bool Board::hasSpaceOnBoard() const {
  return this->freeSquares > 0;
}
//Flips after each move in one direction.
int Board::flip(Point start, SIGN sign, int jumpRow, int jumpCol) {
  int row = start.getX() + jumpRow;
  int col = start.getY() + jumpCol;
  int counter = 0;

  if(row >= this->getSize() || col >= this->getSize() || row <= 0 || col <= 0) {
    return 0;
  }
  while(this->board[row][col].getSign() != sign) {
    SIGN c = this->board[row][col].getSign();
    if (c == EMPTY) { return 0; }
    if (c == sign) { break; }
    counter++;
    row += jumpRow;
    col += jumpCol;
    if(row >= this->getSize() || col >= this->getSize() || row <= 0 || col <= 0){
      return 0;
    }

  }
  row = start.getX();
  col = start.getY();
  for (int i = 0; i <= counter; i++) {
    this->board[row][col].setSign(sign);
    row += jumpRow;
    col += jumpCol;
  }
  return counter;
}
//Operator for printing the Board.
ostream& operator<<(ostream &out, const Board &b) {
  for(int i = 0; i < b.size; i++) {
    for (int j = 0; j< b.size; j++) {
      if (i == 0) {
        if(j < 9) {
        out << j <<" | ";
        } else {
          out << j <<" |";
        }
        continue;
      }
      if (j == 0) {
        if(i < 10) {
          out << i << " | ";
        } else {
          out << i << "| ";
        }
        continue;
      }
      out << (char) b.board[i][j].getSign() <<" | ";
    }
    out << endl;
    out << "---";
    for (int k = 0; k < b.size - 1; k++) {
      out << "----";
    }
    out << endl;
  }
  return out;
}
