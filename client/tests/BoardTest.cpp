/**
 * Tests for Board class.
 */

#include <gtest/gtest.h>
#include "Board.h"

class BoardTest: public testing::Test {

public:
    BoardTest() : b() {}

protected:
     Board b;
};
TEST_F(BoardTest, SetTest) {
    int middle = b.getSize() / 2;
    EXPECT_EQ(9,b.getSize()) << ("board size is not correct");
    for(int i = 0; i < b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            EXPECT_TRUE(b.getBoard()[i][j].getSign() == XSIGN || b.getBoard()[i][j].getSign()  == OSIGN ||
            b.getBoard()[i][j].getSign() == EMPTY);
        }
    }
    EXPECT_EQ(b.getBoard()[middle][middle].getSign(),OSIGN) << ("mid is not O");
    EXPECT_EQ(b.getBoard()[middle + 1][middle + 1].getSign(),OSIGN) << ("mid is not O");
    EXPECT_EQ(b.getBoard()[middle][middle + 1].getSign(),XSIGN) << ("mid is not X");
    EXPECT_EQ(b.getBoard()[middle + 1][middle].getSign(),XSIGN) << ("mid is not X");
}

TEST_F(BoardTest, AddTest) {
    b.addToBoard(XSIGN, 6, 6);
    b.addToBoard(OSIGN, 2, 2);
    EXPECT_TRUE(XSIGN ==b.getBoard()[6][6].getSign());
    EXPECT_EQ(OSIGN,b.getBoard()[2][2].getSign());
    EXPECT_NE(OSIGN,b.getBoard()[1][1].getSign());
    EXPECT_NE(XSIGN,b.getBoard()[7][7].getSign());

}

TEST_F(BoardTest, HasSpaceTest ) {
    EXPECT_TRUE(b.hasSpaceOnBoard());
    for(int i = 0; i < b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            b.addToBoard(XSIGN, i, j);
        }
    }
    EXPECT_TRUE(!b.hasSpaceOnBoard());
}
TEST_F(BoardTest, FlipTest ) {
    int middle = b.getSize() / 2;
    Point p(middle -1,middle);
    //b.flip(p,'X', 1, 0);
    //EXPECT_EQ(b.getBoard()[middle][middle], 'X');
    for(int i = -1; i < 2; i++) {
        for(int j = -1; j < 2; j++) {
            Board tempBoard = b;
            if( i == 0 && j ==0) {
                continue;
            }
            tempBoard.flip(p,XSIGN, i, j);
            if (i == 1 && j ==0) {
                EXPECT_EQ(tempBoard.getBoard()[middle][middle].getSign(), XSIGN);
            } else {
                EXPECT_NE(tempBoard.getBoard()[middle][middle].getSign(), XSIGN);

            }
        }
    }
}



