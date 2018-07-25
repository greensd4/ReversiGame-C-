/**
 * Tests for RegularRules class.
 */

#include <gtest/gtest.h>
#include "Board.h"
#include "Game.h"
#include "RegularRules.h"

class RulesTest: public testing::Test {
public:
    RulesTest(): rules() {}
protected:
    RegularRules rules;
};
TEST_F(RulesTest, ValidPointTest) {

    Board b1;
    Board b2(b1), b3(b1);
    for(int i = 0; i < b1.getSize(); i++) {
        for (int j = 0; j < b1.getSize(); j++) {
            b2.addToBoard(XSIGN, i, j);
            b3.addToBoard(EMPTY, i, j);
        }
    }
    int middle = b1.getSize() /2;
    Point p(middle,middle), p1(middle-1,middle), p2(middle +1,middle);
    //cout << b1;
    EXPECT_FALSE(rules.checkPoint(b1, p, XSIGN));
    EXPECT_TRUE(rules.checkPoint(b1, p1, XSIGN));
    EXPECT_FALSE(rules.checkPoint(b1, p2, XSIGN));
    //checks when the board is full or when its empty.
    for(int i = 1; i < b2.getSize(); i++) {
        for (int j = 1; j < b2.getSize(); j++) {
            Point temp(i, j);
            EXPECT_FALSE(rules.checkPoint(b2, temp, XSIGN));
            EXPECT_FALSE(rules.checkPoint(b3, temp, XSIGN));
        }
    }
    //checks if a change in the board actually effect the rules.
    b1.addToBoard(XSIGN,1,1);
    b1.addToBoard(XSIGN,2,1);
    b1.addToBoard(XSIGN,3,1);
    Point p3(4,1);
    EXPECT_FALSE(rules.checkPoint(b1,p3,OSIGN));
    b1.addToBoard(OSIGN,1,1);
    EXPECT_TRUE(rules.checkPoint(b1,p3,OSIGN));
    //checks out of bounds.
    Point p4(-1,-1);
    ASSERT_FALSE(rules.checkPoint(b1,p4, XSIGN));
}