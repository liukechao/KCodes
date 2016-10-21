/*
 * const folding & const propagation
 */
#include <iostream>
using namespace std;

int main()
{
	const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	int k = i * i + i;
	cout << &i << endl;
	cout << j << endl;
	cout << i << endl;
	cout << *j << endl;
	cout << k << endl;
}
