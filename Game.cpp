#include "Game.h"

Game::Game() :
	m_gameBoard(),
	m_gameController(*this),
	m_gameViewer(*this)
{}

GameBoard &Game::gameBoard()
{
	return m_gameBoard;
}

void Game::run()
{
	while(true) {
		m_gameController.control();

		m_gameViewer.repaint();
	}
}

GameState::Enum Game::gameState() const
{
	return m_gameController.gameState();
}

