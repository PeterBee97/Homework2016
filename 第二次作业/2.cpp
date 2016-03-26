#include<iostream>
class Student
{
public:
	void Display();
	Student(int No,int Grade)
	{
		StuNo=No;
		grade=Grade;
	}
private:
	int StuNo;
	int grade;
}stu[5]={Student(1,1),Student(2,2),Student(3,3),Student(4,4),Student(5,5)};
void Student::Display()
{
	std::cout<<"学号："<<StuNo<<"\n成绩："<<grade<<"\n";
}
Student *p=NULL;
int main()
{
	p=stu;
	p->Display();
	p+=2;
	p->Display();
	p+=2;
	p->Display();
}

