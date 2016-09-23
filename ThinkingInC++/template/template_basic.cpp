#if 0

#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

/* basic template */
template<typename T>
class Data {
	T data;
public:
	class ID {
	public:
		static int count;
		ID() { count++; }
		static void print() { cout << "Count: " << count << endl; }
	};
	ID id;
	/* template function inside a template class: Member Template */
	/* member function templates cannot be virtual */
	template<typename X> X getX();
};

template<typename T>
template<typename X>
X Data<T>::getX()
{
	return X(id.count);
}

/* initialization */
template<typename T>
int Data<T>::ID::count = 0;

/* integer and default arguments */
template<typename T = int,int N = 10, typename D = Data<T> >
class Stack {
	D data[N];
	/* what does this do? create an object */
	typename D::ID id;
public:
	void print() { id.print(); }
};

/* template class as parameters */
template<typename T, template<typename T, int = 10, typename = Data<T>> class S>
class Container {
	S<T, 100, Data<int>> stackA;
	S<T> stackB;
};

/* template function with default arguments */
template<typename T/* Not Here!!! */>
T sum(T a, T b, T init = T()) 
{ 
	init += (a + b);
	return init;
}

/* function to print any standard container */
template<typename T, template<typename U, typename = allocator<U>> class C>
void printContainer(C<T> &c)
{
	cout << "Print Container: ";
	/* typename usage */
	for (typename C<T>::iterator p = c.begin(); p != c.end(); p++)
		cout << *p << "\t";
	cout << endl;
}

/* return a template function */
template<typename X> 
X getX(Data<X> &d)
{
	return d.getX<X>();
}

/* template class as member template */
template<typename X> 
class Outer {
public:
	template<typename Y>
	class Inner {
	public:
		void print();
	};
};

template<typename X>
template<typename Y>
void Outer<X>::Inner<Y>::print()
{
	/* RTTI */
	cout << "Outer: " << typeid(X).name() << endl;
	cout << "Inner: " << typeid(Y).name() << endl;
	cout << "Full Inner: " << typeid(*this).name() << endl;
}

int main()
{
	Stack<> s1;
	Stack<int, 100> s2;
	/* Why print 112? */
	s1.print();
	s2.print();
	Data<int>::ID::print();

	/* Stack with nothing else */
	Container<int, Stack> container;

	cout << "Sum is " << sum(10, 5) << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	printContainer(v);

	list<int> l;
	l.push_front(1);
	l.push_front(2);
	l.push_front(3);
	printContainer(l);

	Data<char  > d;
	cout << "Get X: " << getX(d) << endl;

	Outer<int>::Inner<float> inner;
	inner.print();

	system("pause");
	return 0;
}

#endif