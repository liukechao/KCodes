#include "proxy.h"

using namespace std;

Subject::~Subject() { }

RealSubject::RealSubject()
{
	cout << "Real Subject Constructor" << endl;
}

RealSubject::~RealSubject()
{
	cout << "Real Subject Destructor" << endl;
}

void RealSubject::Request()
{
	cout << "Real Subject Request" << endl;
}

Proxy::Proxy()
{
	subject = NULL;
}

void Proxy::Request()
{
	if (subject == NULL)
		subject = new RealSubject();
	subject->Request();
}

Proxy::~Proxy()
{
	if (subject)
		delete subject;
}