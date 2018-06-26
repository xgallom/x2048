#ifndef POSITION_H__
#define POSITION_H__

struct Position {
	explicit Position(int y, int x) : y(y), x(x) {}

	int y = 0, x = 0;
};

#endif
