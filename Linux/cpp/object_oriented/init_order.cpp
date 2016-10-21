#include <iostream>
using namespace std;

class Test {
private:
	int m_i;
	int m_j;
public:
	Test(int x): m_j(x), m_i(m_j) {}
	Test(): m_j(0), m_i(m_j) {}
	int get_i() { return m_i; }
	int get_j() { return m_j; }
};

int main()
{
	Test t(60);
	cout << t.get_i() << "\t" << t.get_j() << endl;

	return 0;
}
