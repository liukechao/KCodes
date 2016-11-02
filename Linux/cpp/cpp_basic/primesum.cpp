#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n);

int main()
{
	int count=0;
	for(int j=2;j<=10000;j++)
	{
		if(prime(j)&&prime(20000-j))
		{
			count++;
			cout<<"20000="<<j<<"+"<<20000-j<<endl;
		}
	}
	cout<<"20000为"<<count<<"对素数之和。"<<endl;
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