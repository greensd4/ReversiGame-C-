//
// Display abstract header file.
//

#ifndef REVERSIGAME_DISPLAY_H
#define REVERSIGAME_DISPLAY_H

#include "Board.h"
#include "Player.h"
using namespace std;
class Display {
 public:
  /**
   * Show menu, gets parameters to change for game.
   * @param type game type
   * @param rules rules
   * @param boardSize board size.
   */
  virtual void showMenu(int &type, int &rules, int &boardSize) = 0;
  /**
   * shows board.
   * @param b board to show.
   */
  virtual void showBoard(Board &b) = 0;
  /**
   * show message.
   * @param s message.
   */
  virtual void showMessage(string s) = 0;
  /**
   * shows score.
   * @param p1 player 1.
   * @param p2 player 2.
   */
  virtual void showScore(Player &p1, Player &p2) = 0;
  /**
   * shows which player's turn.
   * @param currentPlayer current player.
   */
  virtual void showTurn(Player &currentPlayer) = 0;
  /**
   * show possible moves to the player.
   * @param v vecotr of points.
   */
  virtual void showPossibleMoves(vector<Point> &v) = 0;
  /**
   * show end game screen.
   * @param p1 player 1.
   * @param p2 player 2.
   */
  virtual void showEndGame(Player &p1, Player &p2) = 0;
/**
   * showSubMenu.
   * @param command - the command val to send to server.
   */
    virtual void showSubMenu(string &command) = 0;
};

#endif //REVERSIGAME_DISPLAY_H
