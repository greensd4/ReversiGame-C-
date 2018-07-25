//
// Created by elon on 07/12/17.
//

#include "NetworkReadPlayer.h"
NetworkReadPlayer::NetworkReadPlayer(Client &c) : client(&c), numOfSoldiers(2) {

}
Point NetworkReadPlayer::getPointFromPlayer(Board b, vector<Point> v) {
  Point p = this->client->getMove();
  return p;
}