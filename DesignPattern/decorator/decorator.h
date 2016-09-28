#ifndef	DECORATOR_H
#define DECORATOR_H

#include <iostream>

class Component {
public:
	virtual void operation() = 0;
	virtual ~Component();
};

class ConcreteComponent: public Component {
public:
	void operation();
};

class Decorator: public Component {
public:
	void setComponent(Component* c);
	void operation();
private:
	Component* component;
};

class ConcreteDecoratorA: public Decorator {
public:
	void operation();
};

class ConcreteDecoratorB: public Decorator {
public:
	void operation();
};


#endif