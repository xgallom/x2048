#ifndef ENTRY_H__
#define ENTRY_H__

struct Entry {
	Entry() = default;
	explicit Entry(int value);

	int value = 0;

	void clear();

	bool moveTo(Entry &);
	bool join(Entry &entry);

	bool isEmpty() const;
	bool canJoin(const Entry &entry) const;
};

#endif
