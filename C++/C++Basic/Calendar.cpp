#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	int leap(int);
	void calendar(int);
	int year;
	while(1)
	{
		cout<<"请输入公元年份：";
		cin>>year;
		cout<<endl;
		calendar(year);
		cout<<endl;
	}
	return 0;
}

int leap(int year)
{
	if(year%100!=0&&year%4==0 || year%400==0)
		return 1;
	return 0;
}

void calendar(int year)
{
	int s,week;
	int month[12]={31,28+leap(year),31,30,31,30,31,31,30,31,30,31};
	string weekday[7]={"日","一","二","三","四","五","六"};
	s=year-1+(year-1)/4-(year-1)/100+(year-1)/400+1;
	cout<<"                  "<<year<<"年"<<endl;
	for(int i=0;i<12;i++)
	{
		cout<<"    ======================================"<<endl;
		cout<<"    "<<(i+1)<<"月"<<endl;
		for(int w=0;w<7;w++)
			cout<<setw(6)<<weekday[w];
		cout<<endl;
		if(i>0) 
			s=s+month[i-1];
		week=s%7;
		for(int k=0;k<week;k++) 
				cout<<setw(6)<<" ";
		for(int j=1;j<=month[i];j++)
		{
			cout<<setw(6)<<j;
			if((week+j)%7==0) 
				cout<<endl;
		}
		if((week+month[i])%7!=0) 
			cout<<endl;
	}
	cout<<"    ======================================"<<endl;

}