/*
* Class for Point.
* Each Point has x value and y value.
*/

#ifndef EX2_POINT_H
#define EX2_POINT_H

#include <iostream>
using namespace std;

class Point {
 private:
  int x;
  int y;
 public:
  /**
   * Constructor.
   * @param x x value.
   * @param y y value.
   */
  Point(int x, int y);
  /**
  * Default constructor.
  */
  Point();
    Point(string PointAsString);


    /**
  * Copy constructor.
  * @param p another point.
  */
  Point(const Point &p);
  /**
  * operator ==.
  * @param p another point.
  * @return boolean.
  */
  bool operator == (const Point &p) const;
  Point& operator = (const Point &p);
  /**
  * operator <.
  * @param p another point.
  * @return boolean.
  */
  bool operator < (const Point &p) const ;
  /**
  * operator <<.
  * @param out ostream output.
  * @param p point to print.
  * @return ostream.
  */
  friend ostream& operator <<(ostream &out, const Point &p);
  /**
  * getX.
  * @return x value.
  */
  int getX() const;
  /**
  * getY.
  * @return y value
  */
  int getY() const;
  /**
  * setPoint.
  * Initialize point.
  * @param x x value.
  * @param y y value.
  */
  void setPoint(int x, int y);
    string toString();
};

#endif //EX2_POINT_H
