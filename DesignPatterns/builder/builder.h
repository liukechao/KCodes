#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>

class Builder {
public:
	Builder();
	virtual ~Builder();
	virtual void BuildPart() = 0;
};

class Director {
public:
	Director(Builder* b);
	~Director();
	void Construct();
private:
	Builder* builder;
};

class ConcreteA: public Builder {
public:
	ConcreteA();
	~ConcreteA();
	void BuildPart();
};

class ConcreteB: public Builder {
public:
	ConcreteB();
	~ConcreteB();
	void BuildPart();
};

#endif