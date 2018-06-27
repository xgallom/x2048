#include "GameBoardIterator.h"

GameBoardIterator::GameBoardIterator(GameBoard &gameBoard, Position initialPosition, Direction direction) :
	m_gameBoard(gameBoard),
	m_currentPosition(initialPosition),
	m_direction(direction)
{}

Position GameBoardIterator::currentPosition() const
{
	return m_currentPosition;
}

int GameBoardIterator::x() const
{
	return currentPosition().x;
}

int GameBoardIterator::y() const
{
	return currentPosition().y;
}

Entry &GameBoardIterator::operator *()
{
	return m_gameBoard.entryAt(m_currentPosition);
}

const Entry &GameBoardIterator::operator *() const
{
	return m_gameBoard.constEntryAt(m_currentPosition);
}

bool GameBoardIterator::advance()
{
	if(isValid()) {
		// TODO

		return true;
	}

	return false;
}

bool GameBoardIterator::isValid() const
{
	return m_currentPosition.isValid();
}

