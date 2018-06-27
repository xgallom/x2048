#include "Game.h"

Game::Game() :
	m_gameBoard(),
	m_gameController(*this),
	m_gameViewer(*this)
{}

bool Game::init()
{
	if(!m_gameViewer.init())
		return false;

	m_gameController.init();

	return true;
}

void Game::deinit()
{
	m_gameViewer.deinit();
}

void Game::run()
{
	while(gameState() != GameState::Exiting) {
		m_gameController.control();

		m_gameViewer.repaint();
	}
}

GameState::Enum Game::gameState() const
{
	return m_gameController.gameState();
}

GameBoard &Game::gameBoard()
{
	return m_gameBoard;
}

