#include <ncurses.h>

int main()
{
	if(!initscr()) {
		printf("Error initializing ncurses!\n");
		return 1;
	}

	printw("ncurses works!");
	refresh();

	getch();

	endwin();

	return 0;
}
