#include "builder.h"

Builder::Builder() { }

Builder::~Builder() { }

Director::Director(Builder *b)
{
	builder = b;
}

Director::~Director() 
{
	delete builder;
	builder = 0;
}

void Director::Construct()
{
	builder->BuildPart();
}

ConcreteA::ConcreteA() { }

ConcreteA::~ConcreteA() { }

void ConcreteA::BuildPart()
{
	std::cout << "Concrete A BuildPart" << std::endl;
}

ConcreteB::ConcreteB() { }

ConcreteB::~ConcreteB() { }

void ConcreteB::BuildPart()
{
	std::cout << "Concrete B BuildPart" << std::endl;
}