#include "prototype.h"

Prototype::Prototype(string id) 
{
	ID = id;
}

Prototype::~Prototype() { }

void Prototype::print()
{
	cout << "Prototype Object, ID = " << ID << endl;
}

ConcreteA::ConcreteA(string ID): Prototype(ID) { }

ConcreteA::ConcreteA(const ConcreteA& c): Prototype("Copy of " + c.ID) { }

ConcreteA::~ConcreteA() { }

Prototype* ConcreteA::clone()
{
	return new ConcreteA(*this);
}

void ConcreteA::print()
{
	cout << "Concrete A, ID = " << ID << endl;
}

ConcreteB::ConcreteB(string ID): Prototype(ID) { }

ConcreteB::ConcreteB(const ConcreteB& c): Prototype("Copy of " + c.ID) { }

ConcreteB::~ConcreteB() { }

Prototype* ConcreteB::clone()
{
	return new ConcreteB(*this);
}

void ConcreteB::print()
{
	cout << "Concrete B, ID = " << ID << endl;
}