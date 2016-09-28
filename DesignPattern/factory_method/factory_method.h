#ifndef FACTORY_METHOD_H
#define FACTORY_METHOD_H

#include <iostream>

class Product {
public:
	void Function();
	virtual ~Product();
};

class Creator {
public:
	virtual Product* FactoryMethod() = 0;
	virtual ~Creator();
};

class ConcreteProduct: public Product {
};

class ConcreteCreator: public Creator {
public:
	Product* FactoryMethod();
};

#endif