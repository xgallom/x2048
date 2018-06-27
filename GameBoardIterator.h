#ifndef GAME_BOARD_ITERATOR_H__
#define GAME_BOARD_ITERATOR_H__

#include "GameBoard.h"
#include "Direction.h"

class GameBoardIterator {
	GameBoard &m_gameBoard;
	Position m_currentPosition;
	Direction m_direction;

public:
	GameBoardIterator(GameBoard &gameBoard, Position initialPosition, Direction direction);

	Position currentPosition() const;
	int x() const;
	int y() const;

	Entry &operator *();
	const Entry &operator *() const;

	Entry *operator ->();
	const Entry *operator ->() const;

	void advance();
	bool isValid() const;
};

#endif
