#ifndef LINEARLIST_H
#define LINEARLIST_H

#include "List.h"

template <typename T>
class LinearList: List<T> {
public:
	LinearList();
	bool isEmpty() const;
	int Length() const;
	bool Find(int pos, T& x) const;
	int Search(const T& x) const;
	void Delete(int pos, T& x);
	void Insert(int pos, const T& x);
	void Display(std::ostream& out) const;
	~LinearList();
private:
	int length;
	T* storage;
};


template <typename T>
LinearList<T>::LinearList()
{
	length = 0;
	storage = new int[256];
}

template <typename T>
LinearList<T>::~LinearList()
{
	delete []storage;
}

template <typename T>
bool LinearList<T>::isEmpty() const
{
	return (length == 0);
}

template <typename T>
int LinearList<T>::Length() const
{
	return length;
}

template <typename T>
bool LinearList<T>::Find(int pos, T& x) const
{
	if (pos <= 0 || pos > length)
		return false;
	x = storage[pos];
	return true;
}

template <typename T>
int LinearList<T>::Search(const T& x) const
{
	for (int i = 0; i <= length; i++)
		if (storage[i] == x)
			return i;
	
	return 0;
}

template <typename T>
void LinearList<T>::Delete(int pos, T& x)
{
	if (pos <= 0 || pos > length)
		return;

	x = storage[pos];

	for (int i = pos; i <= length; i++)
		storage[i] = storage[i + 1];
	length--;
}

template <typename T>
void LinearList<T>::Insert(int pos, const T& x)
{
	if (pos <= 0 || pos > length + 1)
		return;

	for (int i = ++length; i > pos; i--)
		storage[i] = storage[i - 1];
	storage[pos] = x;
}

template <typename T>
void LinearList<T>::Display(std::ostream& out) const
{
	for (int i = 1; i <= length; i++)
		out << storage[i] << "  ";
	out << std::endl;
}

#endif