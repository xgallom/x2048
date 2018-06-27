#include <ncurses.h>

#include "GameBoard.h"
#include "GameBoardIterator.h"

int main()
{
	if(!initscr()) {
		printf("Error initializing ncurses!\n");
		return 1;
	}

	GameBoard gameBoard;

	for(GameBoardIterator row(gameBoard, Position(0, 0), Direction::Down); row.isValid(); row.advance()) {
		for(GameBoardIterator i(gameBoard, row.currentPosition(), Direction::Right); i.isValid(); i.advance()) {
			i->value = i.x() + i.y();

			printw("%d ", i->value);
		}

		printw("\n");
	}

	refresh();

	getch();

	endwin();

	return 0;
}
