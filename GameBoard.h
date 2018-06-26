#ifndef GAME_BOARD_H__
#define GAME_BOARD_H__

#include "Position.h"
#include "Entry.h"

class GameBoard {
	Entry m_gameBoard[4][4];

public:
	GameBoard();

	void reset();

	const Entry &constEntryAt(Position position) const;
	Entry &entryAt(Position position);

	bool isFull() const;
};

#endif
