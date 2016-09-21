#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student  //Student类
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
void Student::SetInfo(string num,string n,float e,float c,float m)//设定各项信息
{
	No=num;
	name=n;
	English=e;
	Chinese=c;
	Maths=m;
}
void Student::ShowInfo() //显示信息
{
	cout<<setw(10)<<No<<setw(10)<<name<<setw(10)<<English<<setw(10)<<Chinese<<setw(10)<<Maths<<setw(10)<<Sum()<<endl;
}
float Student::Sum() //返回总分
{
	return (English+Chinese+Maths);
}
int main()
{
	Student temp;
	float avge=0,avgc=0,avgm=0,avgs=0;
	Student stu[5];  //定义5名同学信息的对象数组
	stu[0].SetInfo("1001","王明",85,76,90);
	stu[1].SetInfo("1002","李丽",98,79,85);
	stu[2].SetInfo("1003","赵刚",86,83,99);
	stu[3].SetInfo("1004","孙梅",92,72,84);
	stu[4].SetInfo("1005","张强",89,89,87);
	for(int i=0;i<4;i++)    //按总分排序输出
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
	cout<<setw(10)<<"学号"<<setw(10)<<"姓名"<<setw(10)<<"英语"<<setw(10)<<"语文"<<setw(10)<<"数学"<<setw(10)<<"总分"<<endl;
	for(int k=0;k<5;k++) //输出排序后的信息
		stu[k].ShowInfo();
	for(int m=0;m<5;m++)  //求英语，语文，数学，总分的平均
	{
		avge+=stu[m].Eng()/5;
		avgc+=stu[m].Chi()/5;
		avgm+=stu[m].Mat()/5;
		avgs+=stu[m].Sum()/5;
	}
	cout<<setw(10)<<"平均"<<setw(20)<<avge<<setw(10)<<avgc<<setw(10)<<avgm<<setw(10)<<avgs<<endl;
	return 0;
}
