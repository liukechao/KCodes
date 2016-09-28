#ifndef PROXY_H
#define PROXY_H

#include <iostream>

class Subject {
public:
	virtual void Request() = 0;
	virtual ~Subject();
};

class RealSubject: public Subject {
public:
	RealSubject();
	void Request();
	~RealSubject();
};

class Proxy: public Subject {
public:
	Proxy();
	void Request();
	~Proxy();
private:
	RealSubject* subject;
};

#endif