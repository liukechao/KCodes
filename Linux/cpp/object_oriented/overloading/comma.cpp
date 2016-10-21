#include <iostream>

using namespace std;

class After 
{
	int i;
public:
	After(int ii = 0): i(ii) {}
	const After& operator,(const After&) const {
		cout << "After " << i << endl;
		return *this;
	}
};

class Before 
{
	int i;
public:
	Before(int ii = 0): i(ii) {}
	int ID() { return i; }
};

Before& operator,(After&, Before& b) {
	cout << "Before " << b.ID() << endl;
	return b;
}

int main()
{
	After a1(1), a2(2);
	Before b1(1), b2(2);
	a1, a2;
	a1, b2;
}
