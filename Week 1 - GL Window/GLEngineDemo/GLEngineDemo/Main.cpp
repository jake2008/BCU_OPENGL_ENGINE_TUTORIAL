#include "GameLoop.h"

#undef main

GameLoop * gameLoop;

int main(void) {
	gameLoop = new GameLoop();
	gameLoop->init();

	while (gameLoop->handleInput()) {
		gameLoop->update();
		gameLoop->draw();
	}

	gameLoop->clean();
	delete gameLoop;
	return 0;
}