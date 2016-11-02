#include<iostream>
#include<cmath>
using namespace std;
int calculator2(int m);

int main()
{
	int x,y;
	cout<<"请输入整数x的值："<<endl;
	cout<<"x=";
	cin>>x;
	y=calculator2(x);
	cout<<"9x^8-8x^7+7x^6- … -2x+1="<<y<<endl;
	return 0;
}

int calculator2(int m)
{
	int n=0;
	for(int i=0;i<=8;i++)
	{
		if(i%2!=0)	n-=(i+1)*pow(m,i);
		else n+=(i+1)*pow(m,i);
	}
	return n;
}