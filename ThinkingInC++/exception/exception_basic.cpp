#include "exception.h"

using namespace std;

class MyError {
	const char* const data;
public:
	MyError(const char* const msg = 0): data(msg) { }
	void info() { cout << data << endl; }
};

void f()
{
	throw MyError("My error");
}

#if (FLAG == 1)
int main() try {
	try {
		f();
	} catch(MyError& e) {
		cout << "caught an error: ";
		e.info();
	}

	throw 1;

} catch(int) {
	cout << "int error" << endl;
	getchar();
}
#endif