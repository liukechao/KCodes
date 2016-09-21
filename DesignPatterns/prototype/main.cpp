#include "prototype.h"

int main()
{
	Prototype* pa = new ConcreteA("Product A");
	pa->print();

	Prototype* pb = new ConcreteB("Product B");
	pb->print();

	Prototype* p;

	p = pa->clone();
	p->print();
	delete p;

	p = pb->clone();
	p->print();
	delete p;

	delete pa;
	delete pb;

	getchar();
}