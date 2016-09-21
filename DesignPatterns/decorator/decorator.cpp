#include "decorator.h"

using namespace std;

Component::~Component() { }

void ConcreteComponent::operation()
{
	cout << "Concrete Component" << endl;
}

void Decorator::setComponent(Component *c)
{
	component = c;
}

void Decorator::operation()
{
	if (component)
		component->operation();
}

void ConcreteDecoratorA::operation()
{
	Decorator::operation();
	cout << "Concrete Decorator A" << endl;
}

void ConcreteDecoratorB::operation()
{
	Decorator::operation();
	cout << "Concrete Decorator B" << endl;
}