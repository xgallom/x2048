#include "GameViewer.h"
#include "Game.h"

#include <cstring>

GameViewer::GameViewer(Game &game) :
	m_game(game),
	m_terminalWindow(nullptr),
	m_gameWindow(nullptr)
{}

bool GameViewer::init()
{
	m_terminalWindow = initscr();

	if(!m_terminalWindow)
		return false;

	Position terminalSize = TerminalSize();
	m_gameWindow = subwin(m_terminalWindow, 8*4, 8*4, terminalSize.y /2 - 8*2, terminalSize.x /2 - 8*2);

	if(!m_gameWindow) {
		deinit();

		return false;
	}

	return true;
}

void GameViewer::deinit()
{
	if(m_terminalWindow)
		endwin();
}

void GameViewer::repaint()
{
	static GameState::Enum lastValue = GameState::Size;

	GameState::Enum gameState = m_game.gameState();

	if(gameState != lastValue)
		wclear(m_gameWindow);

	lastValue = gameState;

	switch(gameState) {
	case GameState::Initializing:
		renderInitializing();
		break;

	case GameState::Menu:
		renderMenu();
		break;

	case GameState::Running:
		renderRunning();
		break;

	case GameState::Loading:
		renderLoading();
		break;

	case GameState::Saving:
		renderSaving();
		break;

	default:
		break;
	}

	wrefresh(m_gameWindow);
}

void GameViewer::renderInitializing()
{
	mvwprintw(m_gameWindow, 8*2, 8*2 - strlen("Initializing x2048...")/2, "Initializing x2048...");
}

void GameViewer::renderMenu()
{
}

void GameViewer::renderRunning()
{
}

void GameViewer::renderLoading()
{
}

void GameViewer::renderSaving()
{
}

Position GameViewer::TerminalSize() const
{
	Position retval;

	if(m_terminalWindow)
		getmaxyx(m_terminalWindow, retval.y, retval.x);

	return retval;
}

Position GameViewer::GameWindowSize() const
{
	Position retval;

	if(m_gameWindow)
		getmaxyx(m_gameWindow, retval.y, retval.x);

	return retval;
}

