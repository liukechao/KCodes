#include<iostream>
using namespace std;
int acount(int total);

int main()
{
	int totalmoney;
	cout<<"请输入要兑换的钱数（元）：";
	cin>>totalmoney;
	cout<<"总共有"<<acount(totalmoney)<<"种兑换方法。"<<endl;
	return 0;
}

int acount(int total)
{
	int count=0;
	for(int i=0;i<=total*100;i++)
		for(int j=0;j<=total*100/2;j++)
			for(int k=0;k<=total*100/5;k++)
				if((i+j*2+k*5)==total*100) count++;
	return count;
}
