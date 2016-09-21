#include "LinearList.h"

using namespace std;

int main()
{
	LinearList<int> list;

	for (int i = 1; i <= 10; i++)
		list.Insert(1, i);
	list.Display(std::cout);

	getchar();
}