#include "factory_method.h"

using namespace std;

void Product::Function()
{
	cout << "do something" << endl;
}

Product::~Product() { }

Creator::~Creator() { }

Product* ConcreteCreator::FactoryMethod()
{
	return new ConcreteProduct();
}