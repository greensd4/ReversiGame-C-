/*
* Class for Player.
* Player has sign, knows how many soldiers it has on board
* and can choose a location for next move.
*/

#include "Player.h"
//Constructors.
Player::Player(): sign(EMPTY), numOfSoldiers(2) {}
Player::Player(const Player &p) {
  this->sign = p.sign;
  this->numOfSoldiers = p.numOfSoldiers;
}
//Getters.
SIGN Player::getSign() const { return this->sign; }
int Player::getSoldiers() const { return this->numOfSoldiers;}
//Setters.
void Player::setSign(SIGN s) {this->sign = s;}
void Player::addSoldiers(int num) {
  this->numOfSoldiers += num;
}
//Operators.
bool Player::operator==(const Player &p) const {
  return this->numOfSoldiers == p.numOfSoldiers;
}
