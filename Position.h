#ifndef POSITION_H__
#define POSITION_H__

struct Position {
	Position() = default;
	explicit Position(int y, int x) : y(y), x(x) {}

	int y = 0, x = 0;

	bool isValid() const { return y >= 0 && y < 4 && x >= 0 && x < 4; }
};

#endif
