#include <iostream>
#include <cstring>

using namespace std;

class MyString {
public:
	MyString(const char *str = NULL);
	MyString(const MyString &rv);
	MyString &operator=(const MyString &rv);
	~MyString();
	friend ostream &operator<<(ostream &out, const MyString &s);
private:
	char *data;
};

MyString::MyString(const char *str)
{
	if (str == NULL) {
		data = new char[1];
		data[0] = '\0';
	} else {
		data = new char[strlen(str) + 1];
		strcpy(data, str);
	}
}

MyString::MyString(const MyString &rv)
{
	data = new char[strlen(rv.data) + 1];
	strcpy(data, rv.data);
}

MyString &MyString::operator=(const MyString &rv)
{
	if (this == &rv)
		return *this;
	delete data;

	data = new char[strlen(rv.data) + 1];
	strcpy(data, rv.data);

	return *this;
}

MyString::~MyString()
{
	delete data;
}

ostream &operator<<(ostream &out, const MyString &s)
{
	out << s.data << endl;
	return out;
}

int main()
{
	MyString s1("hello");
	MyString s2 = s1;
	cout << s1;
	cout << s2;

	MyString s3 = "hi";
	s2 = s3;
	cout << s2;
	cout << s3;

	return 0;
}
