#include <iostream>

using namespace std;

int i = 100;

class outer 
{
	class inner 
	{
		/* only static const integral data members can be initialized within a class */
		//static const int i = 0;
		//static const double d = 0;
		static int i;
		static int j;
	public:
		static void print() { cout << i << "; " << j << endl; }
	};
public:
	void print();
};

/* must be defined */
int outer::inner::i = 1;

/* i = 1 */
int outer::inner::j = i + 1;

/* ::i = 100 */
//int outer::inner::j = ::i + 1;

void outer::print()
{
	inner::print();
}

void function() 
{
	class foo 
	{
	public:	
		/* illegal static data member in locally defined class */
		//static int i;
		int i;
		foo(int I = 0): i(I) {}
	} obj(-1);

	cout << obj.i << endl;
}

/* singleton pattern */
class egg
{
	static egg E;
	int i;
	egg(int I): i(I) {}
public:
	static egg *instance() { return &E;}
	int val() { return i;}
};

egg egg::E(23);

int main()
{
	outer obj;

	obj.print();
	function();

	cout << egg::instance()->val() << endl;

	system("pause");
	return 0;
}
