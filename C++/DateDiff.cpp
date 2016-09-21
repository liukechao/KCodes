#include<iostream>
using namespace std;

int leap(int year)    //判断是否为闰年
{
	if(year%100!=0&&year%4==0 || year%400==0)
		return 1;
	return 0;
}

class Student  //Student类
{
public:
	Student();                 //构造函数
	void SetBirthday();
	void ShowBirthday();
	int operator-(Student&d);
	bool operator>(Student&d);
private:
	int year,month,day;
};
Student::Student()
{
	cout<<"输入出生年,月,日：";
	cin>>year>>month>>day;
}
void Student::ShowBirthday()
{
	cout<<"生日为："<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
}
int Student::operator-(Student&d)  //运算符“-”的重载
{
	int days1=0,days2=0;
	/*生日相差的日期，可以分别求出被减数和减数多于减数年份1月1号的天数，
	  然后两者再相减，如下：*/
	int monthday[12]={31,28+leap(d.year),31,30,31,30,31,31,30,31,30,31}; 
	for(int i=d.year;i<year;i++)
		days1+=(365+leap(i));
	for(int j=1;j<month;j++)
		days1+=monthday[j-1];
	days1+=day-1;
	
	for(int k=1;k<d.month;k++)
		days2+=monthday[k-1];
	days2+=d.day-1;
	return (days1-days2);
}
bool Student::operator>(Student&d)  //“>”的重载，判断生日的大小，便于减法的运算
{
	if(year>d.year||year==d.year&&month>d.month||year==d.year&&month==d.month&&day>d.month)
		return true;
	else return false;
}

int main()
{
	cout<<"分别输入两位同学的生日："<<endl;
	Student stu1,stu2;
	int temp=stu1>stu2?stu1-stu2:stu2-stu1;//先判断大小，再做减法
	cout<<"两位同学年龄相差"<<temp<<"天"<<endl;
	return 0;
}