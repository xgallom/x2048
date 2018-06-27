#ifndef GAME_CONTROLLER_H__
#define GAME_CONTROLLER_H__

class Game;

namespace GameState {
enum Enum {
	Initializing = 0,
	Menu,
	Running,
	Loading,
	Saving,
	Exiting,

	Size
};
}

class GameController {
	Game &m_game;

	GameState::Enum m_gameState;

public:
	GameController(Game &game);

	GameState::Enum gameState() const;

	void control();
};

#endif

