#if 1
#include <iostream>	/* for cout, cin */
#include <iosfwd>	/* for Date instead of iostream */
#include <iomanip>	/* for manipulators */
#include <string>	/* for global getline() */

using namespace std;

/* overloading inserter and extractor, using manipulators setw/setfill, fail bit */
class Date {
	int yy;
	int mm;
	int dd;
public:
	Date(int y = 1984, int m = 6, int d = 11): yy(y), mm(m), dd(d) { }
	friend ostream& operator<<(ostream& out, const Date& date) {
		char fc = out.fill('0');
		out << setw(2) << date.mm << "-"
			<< setw(2) << date.dd << "-"
			<< setw(4) << setfill(fc) << date.yy << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Date& date) {
		char dash;
		in >> date.mm >> dash;
		if (dash != '-')
			in.setstate(ios::failbit);
		in >> date.dd >> dash;
		if (dash != '-')
			in.setstate(ios::failbit);
		in >> date.yy;
		return in;
	}
};

int main()
{
	Date date(98, 9, 1);
	cout << date;
	cout << "input a date(mm-dd-yy):" << endl;
	cin >> date;
	cout << date;

	/* simple test on input a string and output hex */
	//int i;
	//char c;
	//char data[100];
	//cout << endl << "input an integer and a string" << endl;
	//cin >> i >> data;
	//cout << i << endl << data << endl;
	//cout.flush();
	//cout << hex << "0x" << i << endl;

	/* test on overloaded get, getline, differences? */
	//i = cin.get();
	//cout << i << endl;
	//cin.get(c);
	//cout << c << endl;
	//cin.get(data, 10, '*');
	//cout << data << endl;
	//cin.get(data, 10);
	//cout << data << endl;

	//cin.getline(data, 10, '*');
	//cout << data << endl;
	//cin.getline(data, 10, '*');
	//cout << data << endl;
	//
	//string str;
	//std::getline(cin, str);
	//cout << str << endl;
	//getline(cin, str, '*');
	//cout << str << endl;
	//getline(cin, str);
	//cout << str << endl;

	system("pause");
	return 0;
}

#endif