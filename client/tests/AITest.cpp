/**
 * Tests for AIPlayer class.
 */

#include <gtest/gtest.h>
#include "AIPlayer.h"
#include "RegularRules.h"
#include "Game.h"

class AITest: public testing::Test {
};
/**
 * InitialTest.
 * test if the AI player plays his best move.
 */
TEST_F(AITest, InitialTest) {
  Board b;
  RegularRules reg;
  HumanPlayer p1(XSIGN);
  AIPlayer ai(OSIGN,reg);
  Game g(b,p1,ai,reg);
  Point p(3,4);
  g.playOneTurn(p,p1.getSign());
  Point pRes = ai.getPointFromPlayer(b,g.checkAllMoves(ai.getSign()));
  Point pThree(3,3);
  EXPECT_EQ(pThree, pRes);
    b.addToBoard(OSIGN,3,3);
    Point p2(3,2);
    g.playOneTurn(p2,p1.getSign());
    Point pRes2 = ai.getPointFromPlayer(b,g.checkAllMoves(ai.getSign()));
    Point pThree2(2,2);
    EXPECT_EQ(pRes2,pThree2);

}

TEST_F(AITest, NoMoeTest) {
    Board b;

    RegularRules reg;
    HumanPlayer p1(XSIGN);
    AIPlayer ai(OSIGN,reg);
    //initializing an empty board.
    b.addToBoard(EMPTY,5,5);
    b.addToBoard(EMPTY,4,4);
    b.addToBoard(EMPTY,4,5);
    b.addToBoard(EMPTY,5,4);


    b.addToBoard(XSIGN,1,1);
    b.addToBoard(XSIGN,2,1);
    b.addToBoard(XSIGN,1,2);
    b.addToBoard(OSIGN,2,2);
    b.addToBoard(OSIGN,1,3);
    b.addToBoard(OSIGN,3,1);
    b.addToBoard(OSIGN,2,3);
    b.addToBoard(OSIGN,3,2);

    Game g(b,p1,ai,reg);
    Point pRes = ai.getPointFromPlayer(b,g.checkAllMoves(ai.getSign()));
    Point pTwo(0,0);
    EXPECT_EQ(pRes,pTwo);
}