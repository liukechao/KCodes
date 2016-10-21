#include <iostream>
using namespace std;

class Test {
public:
	~Test() { cout << "~Test" << endl; }
};

Test func(Test t)
{
	return t;
}

int main()
{
	Test t;
	func(t);
}
