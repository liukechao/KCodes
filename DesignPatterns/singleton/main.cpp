#include "singleton.h"

int main()
{
	//Singleton s;

	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();
	Singleton& s3 = Singleton::getInstance();

	s1.print();
	s2.print();
	s3.print();

	if (&s1 == &s2 && &s2 == &s3)
		std::cout << "It's the same" << std::endl;

	getchar();
}
