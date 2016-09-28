#ifndef STRATEGE_H
#define STRATEGE_H

#include <iostream>

class Strategy {
public:
	virtual void AlgorithmInterface() = 0;
	virtual ~Strategy();
};

class ConcreteStrategyA: public Strategy {
public:
	void AlgorithmInterface();
	~ConcreteStrategyA();
};

class ConcreteStrategyB: public Strategy {
public:
	void AlgorithmInterface();
	~ConcreteStrategyB();
};

class Context {
public:
	Context(Strategy* s);
	void ContextInterface();
private:
	Strategy* strategy;
};

#endif