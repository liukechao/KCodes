#ifndef TEMPLATE_METHOD_H
#define TEMPLATE_METHOD_H

#include <iostream>

class AbstractClass {
public:
	void TemplateMethod();
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	virtual ~AbstractClass();
};

class ConcreteClassA: public AbstractClass {
public:
	void TemplateMethod();
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

class ConcreteClassB: public AbstractClass {
public:
	void TemplateMethod();
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

#endif