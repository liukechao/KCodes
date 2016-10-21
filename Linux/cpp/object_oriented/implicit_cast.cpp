#include <iostream>
using namespace std;

class Test {
public:
	Test() { cout << "default constructor" << endl; }
	/* explicit */ Test(int i) { cout << "constructor with parameter " << i << endl; }
	~Test() { cout << "destructor" << endl; }
};

Test func(Test t)
{
	return t;
}

int main()
{
	func(1);

	return 0;
}
