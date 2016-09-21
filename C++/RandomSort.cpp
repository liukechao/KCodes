#include<iostream>
#include<stdlib.h>
#define SEED 100
using namespace std;

int main()
{
	int i=0,j,k,random;
	int a[300];
	srand(SEED);
	while(i<300)
	{
		random=rand();
		if(random<100 && random>=10)
		{
			j=i-1;
			while(random<a[j])
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=random;
			i++;
		}
	}
	for(k=0;k<300;k++)
	{
		cout<<a[k]<<"   ";
	    if((k+1)%10==0)
		cout<<endl;
	}
	return 0;
}
