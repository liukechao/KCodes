#include "template_method.h"

int main()
{
	AbstractClass* a;
	
	a = new ConcreteClassA();
	a->TemplateMethod();
	delete a;

	a = new ConcreteClassB();
	a->TemplateMethod();
	delete a;

	getchar();
}