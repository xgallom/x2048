#include "GameBoard.h"

GameBoard::GameBoard()
{
	reset();
}

void GameBoard::reset()
{
	for(int y = 0; y < 4; y++)
		for(int x = 0; x < 4; x++)
			m_gameBoard[y][x].clear();
}

const Entry &GameBoard::constEntryAt(Position position) const
{
	return m_gameBoard[position.y][position.x];
}

Entry &GameBoard::entryAt(Position position)
{
	return m_gameBoard[position.y][position.x];
}

bool GameBoard::isFull() const
{
	for(int y = 0; y < 4; y++)
		for(int x = 0; x < 4; x++)
			if(m_gameBoard[y][x].isEmpty())
				return false;

	return true;
}

