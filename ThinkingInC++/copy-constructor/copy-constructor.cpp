#include <iostream>
#include <string>

const int size = 100;

using namespace std;

class CC
{
	char id[size];
	static int count;
public:
	CC(const char* ID = 0)
	{
		if(ID) 
			strncpy(id, ID, size);
		else
			*id = 0;
		count++;
		cout << "Constructor" << endl;
	}
	CC(const CC& cc)
	{
		strncpy(id, cc.id, size);
		strncat(id, "-copy", size - strlen(id));
		count++;
		cout << "Copy Constructor" << endl;
	}
	void print()
	{
		cout << "id: " << id << "; count: " << count << endl;
	}
	~CC()
	{
		count--;
		cout << "Destructor" << endl;
	}
};

int CC::count = 0;

class Construct
{
	int i;
public:
	Construct(int I = 0): i(I) {}
	Construct(Construct& c)
	{
		i = c.i;
	}
};

int main()
{
	CC c1("C1");
	c1.print();
	CC c2 = CC(c1);
	c2.print();

	/* need default constructor */
	Construct c;

	system("pause");
}