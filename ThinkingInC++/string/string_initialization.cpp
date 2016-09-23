#if 0
#include <string>
#include <iostream>

#define TRACE(x) cout << #x##": " << x << endl;

using namespace std;

int main()
{
	string s0;
	string s1("123456");
	string s2 = s1;
	string s3 = "hello, "
				"world!";
	string s4(s3);
	string s5(s3, 7, 5);
	string s6 = s1 + s3.substr(0, 5) + "bye";
	string s7(s6.begin(), s6.end());
	//string se('a');
	string s8(10, 'x');
	
	TRACE(s0);
	TRACE(s1);
	TRACE(s2);
	TRACE(s3);
	TRACE(s4);
	TRACE(s5);
	TRACE(s6);
	TRACE(s7);
	TRACE(s8);

	system("pause");
}
#endif