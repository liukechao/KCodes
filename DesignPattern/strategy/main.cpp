#include "strategy.h"

int main()
{
	Strategy* sa = new ConcreteStrategyA();
	Strategy* sb = new ConcreteStrategyB();

	Context ca(sa);
	Context cb(sb);

	ca.ContextInterface();
	cb.ContextInterface();

	delete sa;
	delete sb;

	getchar();
}