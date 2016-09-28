#include "template_method.h"

using namespace std;

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}

AbstractClass::~AbstractClass() { }

void ConcreteClassA::PrimitiveOperation1()
{
	cout << "Concrete Class A Operation 1" << endl;
}

void ConcreteClassA::PrimitiveOperation2()
{
	cout << "Concrete Class A Operation 2" << endl;
}

void ConcreteClassB::PrimitiveOperation1()
{
	cout << "Concrete Class B Operation 1" << endl;
}

void ConcreteClassB::PrimitiveOperation2()
{
	cout << "Concrete Class B Operation 2" << endl;
}