#include <iostream>
#include "Game.h"


void main()
{

	Game startgame;
	startgame.initGame();
	if (startgame.iStart == 1) {
		startgame.tickGame();
	}

}