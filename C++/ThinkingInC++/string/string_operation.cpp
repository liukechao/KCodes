#if 1
#include<iostream>
#include<string>
#include<cstddef>
#include<algorithm>
#include<exception>

#define TRACE(x) cout /*<< #x##": " */<< (x) << endl;

using namespace std;

string &replaceAll(string &context, const string &from, const string &to)
{
	size_t pos = 0;
	while ((pos = context.find(from, pos)) != string::npos) {
		context.replace(pos, from.size(), to);
		pos += to.size();
	}

	return context;
}

int main()
{
	string s = "Life is like a box of chocolate";
	TRACE(s);
	TRACE(s.size());
	TRACE(s.capacity());
	TRACE(s.insert(0, "Gump's mom said: "));
	TRACE(s.append(", you never know what you are gonna get."));
	TRACE(s.size());
	TRACE(s.capacity());
	s.reserve(500);
	TRACE(s.capacity());

	size_t pos = s.find("chocolate");
	if (pos != string::npos)
		s.replace(pos, string("chocolate").size(), "garbage");
	TRACE(s);
	TRACE(replaceAll(s, "o", "ooo"));
	replace(s.begin(), s.end(), 'a', 'A');
	TRACE(s);
	
	s = s + s[0] + "ood";
	s += "!";
	TRACE(s);
	
	replace(s.begin(), s.end(), 'A', 'a');
	TRACE(replaceAll(s, "ooo", "o"));
	s.erase(0, string("Gump's mom said: ").size());
	TRACE(s);
	s.erase(s.find_last_of('.') + 1);
	TRACE(s);
	s.erase();
	TRACE(s);

	string left("left");
	string right("right");
	TRACE(left == right);
	TRACE(left != right);
	TRACE("left" > right);
	TRACE("left" < right);
	TRACE(left >= right.c_str());
	TRACE(left <= right.c_str());

	string s1("This is what I want.");
	string s2("That is what she wants.");
	s1.swap(s2);
	TRACE(s1 + s2);
	s2.swap(s1);
	TRACE(s1.compare(s2));
	TRACE(s1.compare(5, 8, s2, 5, 8));
	
	try {
		s1.at(100);
	} catch(exception &e) {
		cerr << e.what() << endl;
	}

	system("pause");
	return 0;
}

#endif