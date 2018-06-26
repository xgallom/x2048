#include "Entry.h"

Entry::Entry(int a_value) :
	value(a_value)
{}

void Entry::clear()
{
	value = 0;
}

bool Entry::moveTo(Entry &destination)
{
	if(destination.isEmpty()) {
		destination.value = value;
		clear();

		return true;
	}

	return false;
}

bool Entry::join(Entry &entry)
{
	if(canJoin(entry)) {
		value += entry.value;
		entry.clear();

		return true;
	}

	return false;
}

bool Entry::isEmpty() const
{
	return value == 0;
}

bool Entry::canJoin(const Entry &entry) const
{
	return value == entry.value;
}


