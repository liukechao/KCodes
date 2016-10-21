#include <iostream>
using namespace std;

class Test {
public:
	int i;
	Test(int ii = 0): i(ii) { }
	void func(int i) const { cout << "func" << endl; }
};

int main()
{
	Test t(1);
	int Test::*pmv;
	void (Test::*pmf)(int) const;

	pmv = &Test::i;
	pmf = &Test::func;

	cout << t.*pmv << endl;
	(t.*pmf)(0);
}
