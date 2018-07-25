/*
* Class for Game.
* Game is in charge of the game flow.
*/

#ifndef EX2_PLAY_H
#define EX2_PLAY_H
enum GAME_T{PvsP, PvsAI, PvsRP};
#include <iostream>
#include <algorithm>
#include <vector>
#include "Board.h"
#include "HumanPlayer.h"
#include "Rules.h"
#include "Display.h"
using namespace std;
class Game {
 private:
  Board *b;
  Player *p1;
  Player *p2;
  Rules *rules;
  Display *display;
  GAME_T type;
  bool turn;
    string *command;

public:
  /**
   * Constructor.
   * @param b Board.
   * @param p1 Player 1.
   * @param p2 Player 2.
   * @param rules game rules;
   * @param display display game.
   */
  Game(Board &b, Player &p1, Player &p2, Rules &rules, Display &display, GAME_T type);
  /**
   * Construcotr to game without display.
   * @param b board
   * @param p1 player 1.
   * @param p2 player 2.
   * @param rules game rules.
   */
  Game(Board &b, Player &p1, Player &p2, Rules &rules, GAME_T type);
    /**
   * Copy constructor.
   * @param p another Play.
   */
  Game(const Game &p);
  /**
   * checkAllMoves.
   * Checks all the next moves the player can do.
   * @return list of the possible moves.
   */
  vector<Point> checkAllMoves(SIGN sign);
  /**
   * playOneTurn.
   * After the player chose his next move - he can put it there.
   * @param p point that was chosen by player.
   * @return number of flipped soldiers.
   */
  int playOneTurn(Point &p, SIGN sign);
  /**
   * checkVecHasPoint.
   * checks if the wanted point by user is valid.
   * @param v vecotr of points.
   * @param p point that the user chose.
   * @return boolean.
   */
  bool checkVecHasPoint(vector<Point> &v, Point &p);
  /**
   * currentPlayer.
   * @return the player which it is his turn.
   */
  Player* currentPlayer() const ;
  /**
   * currentOpp.
   * @return opp player.
   */
  Player* currentOpp() const ;
  /**
   * run.
   * runs the game.
   */
  void run();
  /**
   * setScoreAfterMove.
   * updates the number of soldiers in each player.
   * @param num score.
   */
  void setScoresAfterMove(int num);
  /**
   * endGame.
   * screen for end game.
   */
  void endGame();
  /**
   * Assignment opertaor =.
   * @param p another game
   * @return game, after shallow copy.
   */
  Game&operator = (const Game &p);
  /**
   * netRun.
   * Game flow for network game - PvsRP.
   */
  void netRun();
  /**
   * localRun.
   * Game flow for local game - PvsP or PvsAI.
   */
  void localRun();
};

#endif //EX2_PLAY_H
