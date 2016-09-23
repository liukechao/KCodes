#include <iostream>

using namespace std;

class C
{
public:
	int i;
	C(int I = 100): i(I) { }
	void print() { cout << "print function: i = " << i << endl;}
	int f(int x) { cout << "f() called, x = " << x << endl; return 0;}
	int g(int x) { cout << "g() called, x = " << x << endl; return 0;} 
	int h(int x) { cout << "h() called, x = " << x << endl; return 0;} 
};

int main()
{
	C c;
	C* p = &c;

	int i;
	int C::*mvp = &C::i;
	void (C::*mfp)(void) = &C::print;
	int (C::*fps[3])(int) = {&C::f, &C::g, &C::h};
	
	cout << "c.*mvp = " << c.*mvp << endl;
	cout << "p->*mvp = " << p->*mvp << endl;

	(c.*mfp)();
	(p->*mfp)();

	for (i = 0; i < 3; i++) {
		(c.*fps[i])(i);
		(p->*fps[i])(-i);
	}

	system("pause");
}