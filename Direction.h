#ifndef DIRECTION_H__
#define DIRECTION_H__

class Direction {
public:
	enum Enum {
		Right = 0,
		Down,
		Left,
		Up,

		Size
	};
	
private:
	Enum m_direction = Right;

public:
	Direction() = default;
	explicit Direction(Enum direction);

	Direction(const Direction &) = default;
	Direction(Direction &&) = default;

	Direction &operator =(const Direction &) = default;
	Direction &operator =(Direction &&) = default;

	Direction &operator =(Enum e);

	Enum value() const;

	bool isValid() const;
	static bool isValid(Enum e);
};
	
#endif
