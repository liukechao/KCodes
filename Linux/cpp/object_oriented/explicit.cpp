#include <iostream>
using namespace std;

class TEST
{
public:
    explicit TEST(int i = 0) { cout << "in TEST(int i), i = " << i << endl; }
	explicit TEST(const TEST& t) { cout << "in TEST(const TEST& t)" << endl; }
};

int main()
{
	TEST t1(1);
	TEST t2 = t1;
}

