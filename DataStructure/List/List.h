#ifndef LIST_H
#define LIST_H

#include <iostream>

template <class T>
class List {
public:
	virtual bool isEmpty() const = 0;
	virtual int Length() const = 0;
	virtual bool Find(int pos, T& x) const = 0;
	virtual int Search(const T& x) const = 0;
	virtual void Delete(int pos, T& x) = 0;
	virtual void Insert(int pos, const T& x) = 0;
	virtual void Display(std::ostream& out) const = 0;
	virtual ~List() { };
};

#endif