#include <iostream>
using namespace std;

class Test {
	int i;
public:
	Test(int ii = 0): i(ii) {}
	friend ostream& operator<<(ostream& os, const Test& test);
	friend istream& operator>>(istream& is, Test& test);
};

ostream& operator<<(ostream& os, const Test& test)
{
	os << "i = " << test.i << endl;
	return os;
}

istream& operator>>(istream& is, Test& test)
{
	is >> test.i;
	return is;
}

int main()
{
	Test t(100);
	cout << t;
	cin >> t;
	cout << t;
}
