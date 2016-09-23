#if 1
#include <iostream>
#include <cstring>

using namespace std;

/* explicit specialization: function template */
template<typename T>
const T &minimum(const T &a, const T &b)
{
	return (a < b)? a: b;
}
template<>
const char * const &minimum(const char * const &a, const char * const &b)
{
	return (strcmp(a, b) < 0)? a: b;
}

/* partial specialization */
/* function templates don't support this */
template<typename X, typename Y>
class C {
public:
	void f() { cout << "Primary Template" << endl; }
};
template<typename Y>
class C<int, Y> {
public:
	void f() { cout << "int, Y" << endl; }
};
template<typename X>
class C<X, double> {
public:
	void f() { cout << "X, double" << endl; }
};
template<typename X, typename Y>
class C<X *, Y> {
public:
	void f() { cout << "X *, Y" << endl; }
};
template<typename X, typename Y>
class C<X, Y *> {
public:
	void f() { cout << "X, Y *" << endl; }
};
template<typename X, typename Y>
class C<X *, Y *> {
public:
	void f() { cout << "X *, Y *" << endl; }
};
template<typename X>
class C<X, X> {
public:
	void f() { cout << "X, X" << endl; }
};

/* Delayed Instantiation*/
class X {
public:
	void f() { }
};
class Y {
public:
	void g() { }
};
template<typename T>
class XorY {
	T t;
public:
	void a() { t.f(); }
	void b() { t.g(); }
};

int main()
{
	const char *a = "Allen";
	const char *b = "Hello";
	/* it's the same */
	cout << minimum(a, b) << endl;
	cout << minimum<>(a, b) << endl;

	/* partial specialization */
	cout << "\nPartial Specialization\n";
	C<float, int>().f();
	C<int, float>().f();
	C<float, double>().f();
	C<float *, float>().f();
	C<float, float *>().f();
	C<float *, int *>().f();
	C<float, float>().f();
	/* the following are to ambiguous */
	//C<int, int>().f();
	//C<double, double>().f();
	//C<int, double>().f();
	//C<float *, float *>().f();
	//C<int, int *>().f();
	//C<int *, int *>().f();

	/* member functions are not instantiated until needed */
	XorY<X>().a();
	XorY<Y>().b();

	system("pause");
	return 0;
}

#endif