#include "facade.h"

using namespace std;

void SubSystemOne::MethodOne()
{
	cout << "Sub System Method One" << endl;
}

void SubSystemTwo::MethodTwo()
{
	cout << "Sub System Method Two" << endl;
}

void SubSystemThree::MethodThree()
{
	cout << "Sub System Method Three" << endl;
}

void SubSystemFour::MethodFour()
{
	cout << "Sub System Method Four" << endl;
}

Facade::Facade()
{
	one = new SubSystemOne();
	two = new SubSystemTwo();
	three = new SubSystemThree();
	four = new SubSystemFour();
}

void Facade::MethodA()
{
	cout << "Method A" << endl;
	one->MethodOne();
	two->MethodTwo();
	four->MethodFour();
}

void Facade::MethodB()
{
	cout << "Method B" << endl;
	two->MethodTwo();
	three->MethodThree();
}

Facade::~Facade()
{
	delete one;
	delete two;
	delete three;
	delete four;
}