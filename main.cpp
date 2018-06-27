#include "Game.h"

int main()
{
	Game game;

	if(!game.init())
		return 1;

	game.run();

	game.deinit();

	return 0;
}
