#include "GameController.h"
#include "Game.h"

GameController::GameController(Game &game) :
	m_game(game),
	m_gameState(GameState::Initializing)
{
}

GameState::Enum GameController::gameState() const
{
	return m_gameState;
}

void GameController::init()
{
	m_gameState = GameState::Menu;
}

void GameController::control()
{
}

