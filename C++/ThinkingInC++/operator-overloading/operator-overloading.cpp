#include <iostream>

#define SIZE 256

using namespace std;

class Member
{
	int b;
public:
	Member(int B): b(B) {}
	void print() { cout << "Value is " << b << endl;}

	const Member operator+(const Member& rv) const;
	Member operator+=(const Member& rv);
};

class Friend
{
	int i;
public:
	Friend(int I): i(I) {}
	void print() { cout << "Value is " << i << endl;}

	friend const Friend& operator+(const Friend& a);
	friend const Friend operator-(const Friend& a);
	friend const Friend operator~(const Friend& a);
	friend Friend* operator&(Friend& a);
	friend int operator!(const Friend& a);	
	friend const Friend operator++(Friend& a);	/* prefix */
	friend const Friend operator++(Friend& a, int);	/* postfix */	
	friend const Friend operator--(Friend& a);	/* prefix */
	friend const Friend operator--(Friend& a, int);	/* postfix */
};

class Special
{
	int data[SIZE];
public:
	Special(int i = 0) { memset(data, i, SIZE * sizeof(int));}
	int operator[](int i)
	{
		if (i < 0 || i >= SIZE)
			return 0;
		return data[i];
	}
};

const Member Member::operator+(const Member& rv) const
{
	return Member(b + rv.b);
}

Member Member::operator+=(const Member& rv)
{
	b += rv.b;
	return *this;
}

const Friend& operator+(const Friend& a)
{
	return a;
}

const Friend operator-(const Friend& a)
{
	return Friend(-a.i);
}

const Friend operator~(const Friend& a)
{
	return Friend(~a.i);
}

Friend* operator&(Friend& a)
{
	return &a;
}

int operator!(const Friend& a)
{
	return !a.i;
}

const Friend operator++(Friend& a)
{
	a.i++;
	return a;
}

const Friend operator++(Friend& a, int)
{
	Friend temp(a.i);
	a.i++;
	return temp;
}
	
const Friend operator--(Friend& a)
{
	a.i--;
	return a;
}

const Friend operator--(Friend& a, int)
{
	Friend temp(a.i);
	a.i--;
	return temp;
}

int main()
{
	Member i(1), j(2), k(3);

	k += i + j;
	k.print();

	Special a(1);
	cout << hex << a[10] << endl;

	system("pause");
}
