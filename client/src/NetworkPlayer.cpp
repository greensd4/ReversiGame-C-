//
// Created by dandan on 05/12/17.
//

#include "NetworkPlayer.h"
#include "ConsoleDisplay.h"

NetworkPlayer::NetworkPlayer(Client &c) : client(&c), numOfSoldiers(2) {
    try {
        client->connectToServer();
    } catch (char const* msg) {
        throw msg;
    }
}
NetworkPlayer::NetworkPlayer(const NetworkPlayer &cp) {
    this->client = cp.client;
  this->setSign(cp.sign);
    this->numOfSoldiers = cp.numOfSoldiers;
    this->sign = cp.sign;

}

  Point NetworkPlayer::getPointFromPlayer(Board b, vector<Point> v) {
    //in case both players dont have any more moves.
    if(v.size() == 1 && v[0].getX() == -1 && v[0].getY() == -1) {
      Point p(-1,-1);
      client->sendMove(p);
      return p;
    }
    //if player has no moves.
    if(v.size() == 1 && v[0].getX() == -2 && v[0].getY() == -2) {
      Point p(-2,-2);
      client->sendMove(p);
      return p;
    }
    //if its the client's turn he plays a move and sends it to server.
    int row = 0, col = 0;
    cin >> row >> col;
    cin.clear();
    cin.ignore(100, '\n');
    Point p(0,0);
    //Checks the values are in the right range.
    if (row > b.getSize() || row <= 0 || col > b.getSize() || col <= 0) {
      return p;
    }
    p.setPoint(row, col);
    if(!this->checkVecHasPoint(v, p)){
      p.setPoint(0,0);
    }
    client->sendMove(p);
    if(!client->getConnection()) {
      p.setPoint(-1, -1);
    }
    return p;
}

bool NetworkPlayer::checkVecHasPoint(vector<Point> &v, Point &p) {
  if (v.empty()){
    return false;
  }
  for(int i = 0; i < v.size(); i++) {
    if(v[i] == (p)) {
      return true;
    }
  }
  return false;
}
