#if 0

#include <iostream>
#include <string>
#include <sstream>
#include <complex>
#include <cstddef>
#include <cstring>
#include <vector>

using namespace std;

/* need specify type sometimes */
template<typename T>
T min(T &t1, T &t2)
{
	return (t1 < t2)? t1: t2;
}

/* return type vs. parameter type */
template<typename T>
T fromString(const string &s)
{
	T t;
	istringstream is(s);
	is >> t;
	return t;
}
template<typename T>
string toString(const T &t)
{
	ostringstream os;
	os << t;
	return os.str();
}

/* return type */
template<typename P, typename R>
R cast(const P &p)
{
	return p;
}

/* using reference can deduce array size */
template<size_t R, size_t C, typename T>
void init1(T a[R][C])
{
	for (size_t i = 0; i < R; i++)
		for (size_t j = 0; j < C; j++)
			a[i][j] = T();
}
template<size_t R, size_t C, typename T>
void init2(T (&a)[R][C])
{
	for (size_t i = 0; i < R; i++)
		for (size_t j = 0; j < C; j++)
			a[i][j] = T();
}

/* overloading with non-template functions */
template<typename T>
const T& minimum(const T &a, const T &b)
{
	cout << "template version of minimum" << endl;
	return (a < b)? a: b;
}
const char *minimum(const char *a, const char *b)
{
	cout << "const char * version of minimum" << endl;
	return (strcmp(a, b) < 0)? a: b;
}
double minimum(double a, double b)
{
	cout << "double version of minimum" << endl;
	return (a < b)? a: b;
}

/* address of function template */
template<typename T> void funcA(T *) { }
template<typename T> void funcB(void (*fp)(T *)) { }
void funcC(void (*fp)(int *)) { }

/* apply function to STL container */
template<typename C, typename R, typename T>
void apply(C &c, R (T::*pmf)(void) const)
{
	for (typename C::iterator i = c.begin(); i != c.end(); i++)
		((*i)->*pmf)();
}
template<typename C, typename R, typename T>
void apply(C &c, R (T::*pmf)(void))
{
	for (typename C::iterator i = c.begin(); i != c.end(); i++)
		((*i)->*pmf)();
}
template<typename C, typename R, typename T, typename A>
void apply(C &c, R (T::*pmf)(A), A a)
{
	for (typename C::iterator i = c.begin(); i != c.end(); i++)
		((*i)->*pmf)(a);
}
class Stuff {
public:
	void say(void) { cout << "hi, void say(void)" << endl; }
	void say(void) const { cout << "hi, void say(void) const" << endl; }
	void say(int i) { cout << "hi, void say(int): " << i << endl; }
};

/* partial ordering */
template<typename T> void func(T t) { cout << "T" << endl; }
template<typename T> void func(T *t) { cout << "T *" << endl; }
template<typename T> void func(const T *t) { cout << "const T *" << endl; }

int main()
{
	int ia = 5, ib = 10;
	double da = 3.0;

	cout << min(ia, ib) << endl;
	/* template parameter 'T' is ambiguous */
	//cout << min(da, ib) << endl;
	cout << min<double>(da, ib) << endl;

	cout << toString(ia) << "\t" << toString(complex<double>(da, ib)) << endl;
	/* could not deduce template argument for 'T' */
	//cout << fromString(string("256")) << "\t" << fromString("(1, 2)") << endl;
	cout << fromString<int>(string("256")) << "\t" << fromString<complex<int>>("(1, 2)") << endl;

	/* return type must be specified */
	float f = cast<int, float>(ia);
	/* cannot compile */
	//float f = cast(ia);
	//char *p = cast<char *>(ia);

	int a[10][20];
	init1<10, 20>(a); /* must <10, 20> */
	init2(a);

	int x[1][2][3][4]; /* more than 2 dimensions */

	/* const is necessary for const char * version */
	const char *s1 = "Allen.";
	const char *s2 = "Hello.";
	cout << minimum(1, 2) << "\t" << minimum<>(s1, s2) << endl; /* template */
	cout << minimum(3.0, 4.0) << endl; /* double */
	cout << minimum(s1, s2) << endl; /* const char * */

	/* address of function templates */
	funcC(&funcA<int>);
	funcC(&funcA);
	funcB<int>(&funcA<int>);
	funcB(&funcA<int>);
	funcB<int>(&funcA);
	/* cannot use function template 'void funcA(T *)' as a function argument */
	//funcB(&funcA); 

	vector<Stuff *> stuffs;
	for (int i = 0; i < 5; i++)
		stuffs.push_back(new Stuff());
	apply(stuffs, &Stuff::say);
	/* how to call const version of say() ? */
	apply(stuffs, &Stuff::say, 123);

	/* most specialized template is called */
	func(0);	/* T */
	int i = 0;
	func(&i);	/* T * */
	const int j = 0;
	func(&j);	/* const T * */

	system("pause");
	return 0;
}

#endif