#if 0
#include <iostream>
#include <string>
#include <cstddef>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

/* find primes using Eratosthenes */
template<size_t N = 100>
class Primes {
	string primes;
public:
	Primes(): primes(N + 1, 'P') { }
	static bool isPrime(int n);
	void findPrimes();
	void printPrimes();
};
template<size_t N>
bool Primes<N>::isPrime(int n)
{
	if (n == 0 || n == 1)
		return false;
	int root = (int)sqrt(double(n));
	for (int i = 2; i <= root; i++)
		if (n % i == 0)
			return false;
	return true;
}
template<size_t N>
void Primes<N>::findPrimes()
{
	primes.replace(0, 2, "NN");
	int root = (int)sqrt(double(N));
	for (int i = 2; i <= root; i++)
		for(int factor = 2; factor * i <= N; factor ++)
			primes[factor * i] = 'N';
}
template<size_t N>
void Primes<N>::printPrimes()
{
	int i = 1;
	while ((i = primes.find_first_of('P', i)) != string::npos) {
		cout << i;
		if (isPrime(i))
			cout << "\t";
		else
			cout << "*\t";
		i++;
	}
	cout << endl;
}


/* toupper tolower */
void upperCase(string &s)
{
	for (size_t i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}
void lowerCase(string &s)
{
	for (size_t i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

/* rfind */
void parseData(const string &s)
{
	vector<string> result;
	int last = s.size();
	int current = s.rfind(';');

	while (current != string::npos) {
		current++;
		result.push_back(s.substr(current, last - current));
		current -= 2;
		last = current + 1;
		current = s.rfind(';', current);
	}
	result.push_back(s.substr(0, last));

	for (vector<string>::iterator i = result.begin(); i != result.end(); i++)
		cout << *i;
	cout << endl;
}

/* find_first_not_of find_last_not_of */
string trim(const string &s)
{
	if(s.size() == 0)
		return s;
	size_t begin = s.find_first_not_of(" \a\b\f\n\r\t\v");
	size_t end = s.find_last_not_of(" \a\b\f\n\r\t\v");
	if (begin == string::npos)
		return "";
	return s.substr(begin, end - begin + 1);
}

int main()
{
	Primes<100> p;

	p.findPrimes();
	p.printPrimes();

	string s("I love C++");
	upperCase(s);
	cout << s << endl;
	lowerCase(s);
	cout << s << endl;

	string data("now.;sense ;make ;to ;going ;is ;This ");
	parseData(data);

	string mix = " \tHello, my name is Allen.\r\n \t";
	cout << mix << endl;
	cout << trim(mix) << endl;

	system("pause");
	return 0;
}

#endif