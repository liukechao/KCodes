#include "singleton.h"

Singleton::Singleton() 
{
	std::cout << "Singleton Constructor" << std::endl;
}

Singleton::~Singleton()
{
	std::cout << "Singleton Destructor" << std::endl;
}

void Singleton::print()
{
	std::cout << "Singleton Object, Address: " << this << std::endl;
}

Singleton& Singleton::getInstance() 
{
	static Singleton instance;
	return instance;
}