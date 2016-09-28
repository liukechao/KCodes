#include "decorator.h"

int main()
{
	ConcreteComponent *c = new ConcreteComponent();

	ConcreteDecoratorA *cda = new ConcreteDecoratorA();
	ConcreteDecoratorB *cdb = new ConcreteDecoratorB();

	cda->setComponent(c);
	cdb->setComponent(cda);

	cdb->operation();

	delete cda;
	delete cdb;
	delete c;

	getchar();
}