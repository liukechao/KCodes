#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student  //Student��
{
public:
	void SetInfo(string num,string n,float e,float c,float m);
	void ShowInfo();
	float Eng() {return English;}
	float Chi() {return Chinese;}
	float Mat() {return Maths;}
	float Sum();
private:
	string No;
	string name;
	float English,Chinese,Maths;
};
void Student::SetInfo(string num,string n,float e,float c,float m)//�趨������Ϣ
{
	No=num;
	name=n;
	English=e;
	Chinese=c;
	Maths=m;
}
void Student::ShowInfo() //��ʾ��Ϣ
{
	cout<<setw(10)<<No<<setw(10)<<name<<setw(10)<<English<<setw(10)<<Chinese<<setw(10)<<Maths<<setw(10)<<Sum()<<endl;
}
float Student::Sum() //�����ܷ�
{
	return (English+Chinese+Maths);
}
int main()
{
	Student temp;
	float avge=0,avgc=0,avgm=0,avgs=0;
	Student stu[5];  //����5��ͬѧ��Ϣ�Ķ�������
	stu[0].SetInfo("1001","����",85,76,90);
	stu[1].SetInfo("1002","����",98,79,85);
	stu[2].SetInfo("1003","�Ը�",86,83,99);
	stu[3].SetInfo("1004","��÷",92,72,84);
	stu[4].SetInfo("1005","��ǿ",89,89,87);
	for(int i=0;i<4;i++)    //���ܷ��������
	{
		for(int j=i+1;j<5;j++)
		{
				if(stu[i].Sum()<stu[j].Sum())
				{
					temp=stu[i];
					stu[i]=stu[j];
					stu[j]=temp;
				}
		}
	}
	cout<<setw(10)<<"ѧ��"<<setw(10)<<"����"<<setw(10)<<"Ӣ��"<<setw(10)<<"����"<<setw(10)<<"��ѧ"<<setw(10)<<"�ܷ�"<<endl;
	for(int k=0;k<5;k++) //�����������Ϣ
		stu[k].ShowInfo();
	for(int m=0;m<5;m++)  //��Ӣ����ģ���ѧ���ֵܷ�ƽ��
	{
		avge+=stu[m].Eng()/5;
		avgc+=stu[m].Chi()/5;
		avgm+=stu[m].Mat()/5;
		avgs+=stu[m].Sum()/5;
	}
	cout<<setw(10)<<"ƽ��"<<setw(20)<<avge<<setw(10)<<avgc<<setw(10)<<avgm<<setw(10)<<avgs<<endl;
	return 0;
}
