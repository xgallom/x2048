#include "Direction.h"

Direction::Direction(Direction::Enum direction)
{
	*this = direction;
}

Direction &Direction::operator =(Direction::Enum e)
{
	if(isValid(e))
		m_direction = e;

	return *this;
}

Direction::Enum Direction::value() const
{
	return m_direction;
}

bool Direction::isValid() const
{
	return isValid(m_direction);
}

bool Direction::isValid(Direction::Enum e)
{
	return e >= 0 && e < Size;
}

