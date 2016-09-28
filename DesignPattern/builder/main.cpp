#include "builder.h"

int main()
{
	Builder* ba = new ConcreteA();
	Builder* bb = new ConcreteB();	
	Director* d;

	d = new Director(ba);
	d->Construct();
	delete d;

	d = new Director(bb);
	d->Construct();
	delete d;

	getchar();
}

