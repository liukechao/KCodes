#include <iostream>

using namespace std;

template<typename T>
class Test {
public:
	T func_a(T t) const { cout << "T::func_a(T t) called, t is " << t << endl; }
	T func_b(T t) const { cout << "T::func_b(T t) called, t is " << t << endl; }
	T func_c(T t) const { cout << "T::func_c(T t) called, t is " << t << endl; }
	
	typedef T (Test::*PMF)(T) const;
	
	class Object {
		Test* test;
		//PMF pmf;
		T (Test::*pmf)(T) const;
	public:
		Object(Test* t, PMF p): test(t), pmf(p) { }
		T operator()(T t) const {
			return (test->*pmf)(t);
		}
	};
	
	Object operator->*(PMF p) {
		return Object(this, p);
	}
};

int main()
{
	Test<int> test_int;
	Test<int>::PMF pmf_int;

	pmf_int = &Test<int>::func_a;
	(test_int.*pmf_int)(0);
	(test_int->*pmf_int)(1);
	
	pmf_int = &Test<int>::func_b;
	(test_int->*pmf_int)(2);
	
	pmf_int = &Test<int>::func_c;
	(test_int->*pmf_int)(3);

	Test<string> test_string;
	Test<string>::PMF pmf_string;

	pmf_string = &Test<string>::func_a;
	(test_string->*pmf_string)("Hello");
	
	pmf_string = &Test<string>::func_b;
	//(test_string->*pmf_string)(",");
	
	pmf_string = &Test<string>::func_c;
	//(test_string->*pmf_string)("World!");
}
