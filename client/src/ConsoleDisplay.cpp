//
//ConsoleDisplay source file.
//

#include <cstdlib>
#include <string.h>
#include "ConsoleDisplay.h"
void ConsoleDisplay::showBoard(Board &b) {
  cout << b;
}
void ConsoleDisplay::showMessage(string s) {
  cout << s << endl;
}
void ConsoleDisplay::showPossibleMoves(vector<Point> &v) {
  for(int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) {
      cout << ",";
    }
  }
  cout << endl;
}
void ConsoleDisplay::showScore(Player &p1, Player &p2) {
  cout << "Current score: " << (char) p1.getSign() << ": " << p1.getSoldiers()
       << ", " << (char) p2.getSign() << ": " << p2.getSoldiers() << endl;
}
void ConsoleDisplay::showTurn(Player &currentPlayer) {
  cout << (char) currentPlayer.getSign() << ": It's your move:" << endl;
}
void ConsoleDisplay::showMenu(int &type, int &rules, int &boardSize) {
  bool boardBool = false, rulesBool = false, typeBool = false;
  //Asks for game type.
  while(!typeBool) {
    cout << "Please choose game type:\n"
        "1.Player vs. Player.\n"
        "2.Player vs. Computer.\n"
        "3.Player vs. Remote Player\n"
        "4.Quit " << endl;
    cin >> type;
    cin.clear();
    cin.ignore(100, '\n');
    if(type <= 0 || type > 4){
      cout << "Please enter valid choice" << endl;
      type = 0;
      continue;
    } else {
      typeBool = true;
    }
  }
  if(type == 4) {
    return;
  }
  //Asks for Board size.
  while (!boardBool) {
      if(type == 3) {
          boardSize = 8;
          break;
      }
    cout << "Please enter board size:\n";
    cin >> boardSize;
    cin.clear();
    cin.ignore(100, '\n');
    if(boardSize < 4){
      cout << "Please enter valid choice" << endl;
      boardSize = 0;
      continue;
    } else {
      boardBool = true;
    }
  }
  //Asks for rules type.
  while(!rulesBool) {
      if (type == 3) {
          rules = 1;
          break;
      }
    cout << "Please choose game rules:\n"
        "1.Regular game." << endl;
    cin >> rules;
    cin.clear();
    cin.ignore(100, '\n');
    if(rules != 1){
      cout << "Please enter valid choice" << endl;
      rules = 0;
      continue;
    } else {
      rulesBool = true;
    }
  }
}
void ConsoleDisplay::showEndGame(Player &p1, Player &p2) {
  char winner, loser;
  int winScore;
  if (p1.getSoldiers() == p2.getSoldiers()) {
    cout << "Game ended with a tide." << endl;
    return;
  }
  if (p1.getSoldiers() > p2.getSoldiers()) {
    winner = p1.getSign();
    winScore = p1.getSoldiers();
    loser = p2.getSign();
  } else {
    winner = p2.getSign();
    winScore = p2.getSoldiers();
    loser = p1.getSign();
  }
  cout << "Winner is: " << winner << " with a score of "
       << winScore << " points! :)" << endl;
  cout << loser << " maybe next time :(" << endl;
}

void ConsoleDisplay::showSubMenu(string &command) {
  cout << "Please choose a command:\n"
          "1.start <name>.\n"
          "2.join <name>.\n"
          "3.list_games." << endl;
  getline(cin, command);
}

