#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n);

int main()
{
	int count=0;
	for(int j=100;j<=5000;j++)
	{
		if(prime(j))
			count++;
	}
	cout<<"100��5000֮���������"<<count<<"��"<<endl;
	return 0;
}

bool prime(int n)
{
	bool flag=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}	