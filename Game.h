#ifndef GAME_H__
#define GAME_H__

#include "GameBoard.h"
#include "GameController.h"
#include "GameViewer.h"

class Game
{
private:
	GameBoard m_gameBoard;
	GameController m_gameController;
	GameViewer m_gameViewer;

public:
	Game();

	bool init();
	void deinit();
	void run();

	GameState::Enum gameState() const;

	GameBoard &gameBoard();
};

#endif

