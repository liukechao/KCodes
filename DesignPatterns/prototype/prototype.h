#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <string>

using namespace std;

class Prototype {
public:
	Prototype(string id = 0);
	virtual ~Prototype();
	virtual Prototype* clone() = 0;
	virtual void print();
	string ID;
};

class ConcreteA: public Prototype {
public:
	ConcreteA(string id = 0);
	ConcreteA(const ConcreteA&);
	~ConcreteA();
	Prototype* clone();
	void print();
};

class ConcreteB: public Prototype {
public:
	ConcreteB(string id = 0);
	ConcreteB(const ConcreteB&);
	~ConcreteB();
	Prototype* clone();
	void print();
};

#endif
