#include "GameBoardIterator.h"

static const Position &deltaPositionFromDirection(Direction direction)
{
	static Position
			Right( 1,  0),
			Down ( 0,  1),
			Left (-1,  0),
			Up   ( 0, -1),
			Invalid;

	switch(direction.value()) {
	case Direction::Right: return Right;
	case Direction::Down : return Down;
	case Direction::Left : return Left;
	case Direction::Up   : return Up;
	default: return Invalid;
	}
}

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

Entry *GameBoardIterator::operator ->()
{
	return &m_gameBoard.entryAt(m_currentPosition);
}

const Entry *GameBoardIterator::operator ->() const
{
	return &m_gameBoard.constEntryAt(m_currentPosition);
}

void GameBoardIterator::advance()
{
	m_currentPosition += deltaPositionFromDirection(m_direction);
}

bool GameBoardIterator::isValid() const
{
	return m_currentPosition.isValid();
}

