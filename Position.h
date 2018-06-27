#ifndef POSITION_H__
#define POSITION_H__

struct Position {
	Position() = default;
	explicit Position(int x, int y) : y(y), x(x) {}

	int y = 0, x = 0;

	bool isValid() const { return y >= 0 && y < 4 && x >= 0 && x < 4; }

	Position &operator +=(const Position &rhs) { y += rhs.y; x += rhs.x; return *this; }
};

#endif
