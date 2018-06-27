#ifndef GAME_VIEWER_H__
#define GAME_VIEWER_H__

#include <ncurses.h>
#include "Position.h"

class Game;

class GameViewer
{
	Game &m_game;
	WINDOW *m_terminalWindow, *m_gameWindow;

public:
	GameViewer(Game &game);

	bool init();
	void deinit();
	void repaint();

private:
	void renderInitializing();
	void renderMenu();
	void renderRunning();
	void renderLoading();
	void renderSaving();

	Position TerminalSize() const;
	Position GameWindowSize() const;
};

#endif

