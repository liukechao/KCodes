#include<iostream>
using namespace std;
int hanoi(int n,char X,char Y);
char rest(char X,char Y);
int main()
{
	while(1)
	{
		int num;
		cout<<"**************��ŵ��****************"<<endl;
		cout<<"���������ӵĸ�������0��������";
		cin>>num;
		if(num==0) exit(1);
		else 
		{	
			cout<<"�ᶯ�������£�"<<endl;
			cout<<"����Ҫ�ᶯ"<<hanoi(num,'A','C')<<"�Ρ�"<<endl;
		}
	}
	return 0;
}
int hanoi(int n,char X,char Y)
{
	int count=0;
	if(n>1)
	{
		count+=hanoi(n-1,X,rest(X,Y));
		cout<<X<<"--->"<<Y<<endl;
		count++;
		count+=hanoi(n-1,rest(X,Y),Y);
	}
	if(n==1)
	{
		count++;
		cout<<X<<"--->"<<Y<<endl;
	}
	return count;
}
char rest(char X,char Y)
{
	return (198-X-Y);
}



