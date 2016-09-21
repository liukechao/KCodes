#include<iostream>
using namespace std;

int leap(int year)    //�ж��Ƿ�Ϊ����
{
	if(year%100!=0&&year%4==0 || year%400==0)
		return 1;
	return 0;
}

class Student  //Student��
{
public:
	Student();                 //���캯��
	void SetBirthday();
	void ShowBirthday();
	int operator-(Student&d);
	bool operator>(Student&d);
private:
	int year,month,day;
};
Student::Student()
{
	cout<<"���������,��,�գ�";
	cin>>year>>month>>day;
}
void Student::ShowBirthday()
{
	cout<<"����Ϊ��"<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
}
int Student::operator-(Student&d)  //�������-��������
{
	int days1=0,days2=0;
	/*�����������ڣ����Էֱ�����������ͼ������ڼ������1��1�ŵ�������
	  Ȼ����������������£�*/
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
bool Student::operator>(Student&d)  //��>�������أ��ж����յĴ�С�����ڼ���������
{
	if(year>d.year||year==d.year&&month>d.month||year==d.year&&month==d.month&&day>d.month)
		return true;
	else return false;
}

int main()
{
	cout<<"�ֱ�������λͬѧ�����գ�"<<endl;
	Student stu1,stu2;
	int temp=stu1>stu2?stu1-stu2:stu2-stu1;//���жϴ�С����������
	cout<<"��λͬѧ�������"<<temp<<"��"<<endl;
	return 0;
}