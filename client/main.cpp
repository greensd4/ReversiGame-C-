/*
 * main file.
 */

#include "ConsoleDisplay.h"
#include "Game.h"
#include "GameMenu.h"
int main() {
  Display *d = new ConsoleDisplay;
  while(true) {
    GameMenu gm(*d);
    Game *p;
    p = gm.showMenu();
    if(gm.toEndGAME()) {
      break;
    }
    p->run();
    delete p;
  }
  delete d;
}