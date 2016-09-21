#include "strategy.h"

Strategy::~Strategy() { }

void ConcreteStrategyA::AlgorithmInterface()
{
	std::cout << "Algorithm A" << std::endl;
}

ConcreteStrategyA::~ConcreteStrategyA()
{
	std::cout << "~ConcreteStrategyA" << std::endl;
}

void ConcreteStrategyB::AlgorithmInterface()
{
	std::cout << "Algorithm B" << std::endl;
}

ConcreteStrategyB::~ConcreteStrategyB()
{
	std::cout << "~ConcreteStrategyB" << std::endl;
}

Context::Context(Strategy *s)
{
	strategy = s;
}

void Context::ContextInterface()
{
	strategy->AlgorithmInterface();
}