#ifndef GAME_VIEWER_H__
#define GAME_VIEWER_H__

class Game;

class GameViewer
{
	Game &m_game;

public:
	GameViewer(Game &game);

	void repaint();
};

#endif

