#include <iostream>

#ifdef VIR
#define HOW virtual
#else
#define HOW
#endif

using namespace std;

class A {
	char k[3];
public:
	virtual void f() {}
};

class B: public HOW A {
	char k[3];
public:
	virtual void f() {}
};

class C: public HOW B {
	char k[3];
public:
	virtual void f() {}
};

int main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;

	return 0;
}
