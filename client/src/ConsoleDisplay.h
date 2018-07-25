//
// ConsoleDisplay header file, derived from Display.
//

#ifndef REVERSIGAME_CONSOLEDISPLAY_H
#define REVERSIGAME_CONSOLEDISPLAY_H

#include "Display.h"
class ConsoleDisplay : public Display{
 public:
  /**
   * Show menu, gets parameters to change for game.
   * @param type game type
   * @param rules rules
   * @param boardSize board size.
   */
  void showMenu(int &type, int &rules, int &boardSize);
  /**
   * shows board.
   * @param b board to show.
   */
  void showBoard(Board &b);
  /**
   * show message.
   * @param s message.
   */
  void showMessage(string s);
  /**
   * shows score.
   * @param p1 player 1.
   * @param p2 player 2.
   */
  void showScore(Player &p1, Player &p2);
  /**
   * shows which player's turn.
   * @param currentPlayer current player.
   */
  void showTurn(Player &currentPlayer);
  /**
   * show possible moves to the player.
   * @param v vecotr of points.
   */
  void showPossibleMoves(vector<Point> &v);
  /**
   * show end game screen.
   * @param p1 player 1.
   * @param p2 player 2.
   */
  void showEndGame(Player &p1, Player &p2);
  /**
   * showSubMenu.
   * @param command - the command val to send to server.
   */
    void showSubMenu(string &command);
};

#endif //REVERSIGAME_CONSOLEDISPLAY_H
