#include<iostream>
using namespace std;
#define MAXNAMES 50
#define LENGTH 10
int main()
{
	void Sort1(char **p,int n); //ѡ������
	void Sort2(char **p,int n);	//��������
	char name[MAXNAMES][LENGTH];
	char *np[MAXNAMES];
	char **p;
	int n;
	cout<<"���������ֵĸ�����";
	cin>>n;
	for(int m=0;m<n;m++)
		np[m]=name[m];
	p=np;
	cout<<"������ÿ��������"<<endl;
	for(int i=0;i<n;i++)
		cin>>name[i];
	cout<<"ѡ������"<<endl;
	Sort1(p,n);
	for(int j=0;j<n;j++) 
		cout<<*(p+j)<<" ";
	cout<<endl;
	cout<<"��������"<<endl;
	Sort2(p,n);    
	for(int k=0;k<n;k++) 
		cout<<*(p+k)<<" ";
	cout<<endl;
	return 0;
}                            

void Sort1(char **p,int n)  
{
	char *temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
				if(**(p+i)>**(p+j))
				{
					temp=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=temp;
				}
		}
	}
}

void Sort2(char **p,int n)   
{
	char *temp;
	int j;
	for(int i=1;i<n;i++)
	{
		temp=*(p+i);
		j=i;
		while(j>=1 && *temp<**(p+j-1))
		{
			*(p+j)=*(p+j-1);
			j--;
		}
		*(p+j)=temp;
	}
}




