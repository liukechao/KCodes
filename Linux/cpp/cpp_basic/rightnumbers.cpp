#include<iostream>
#include<cmath>
using namespace std;
bool seek(int);
int main()
{
	int i;
	cout<<"100－999之间满足条件的数有："<<endl;
	for(i=100;i<1000;i++)
	{
		if(seek(i))
		cout<<i<<"   "; 
	}
	cout<<endl;
	return 0; 
}
bool seek(int n)
{
	int n1=n%10;
	int n100=n/100;
	int n10=(n-n100*100)/10;
	return (n==(pow(n1,3)+pow(n10,2)+n100));
}
