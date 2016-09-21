#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton {
public:
	~Singleton();
	void print();
	static Singleton& getInstance();
protected:
	Singleton();
};

#endif
