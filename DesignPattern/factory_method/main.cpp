#include "factory_method.h"

int main()
{
	Creator* f = new ConcreteCreator();
	Product* p = f->FactoryMethod();

	p->Function();

	delete p;
	delete f;

	getchar();
}