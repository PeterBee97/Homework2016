#include<iostream>
class Student
{
public:
	void Display(){
		std::cout<<"姓名："<<name<<"\n学号："<<StuNo<<"\n成绩："<<grade<<"\n";
	}
	Student(char Name[]="",int No=0,int Grade=0)
	{
		strcpy(name,Name);
		StuNo=No;
		grade=Grade;
	}
	void SetVal(char Name[],int No,int Grade)
	{
		strcpy(name,Name);
		StuNo=No;
		grade=Grade;
	}
	Student(const Student& stu)
	{
		strcpy(name,stu.name);
		StuNo=stu.StuNo;
		grade=stu.grade;
	}

	int GetGrade(){return grade;}
	int GetNo(){return StuNo;}
private:
	char name[30];
	int StuNo;
	int grade;
}stu[10];
Student *p=NULL;
Student* max(Student* p1,Student* p2)
{
	if (p1->GetGrade()>p2->GetGrade()) return p1;
	return p2;
}
Student& find(int StuNo)
{
	for (int i=0;i<10;i++)
		if(stu[i].GetNo()==StuNo) return stu[i];
	std::cout<<"这位童鞋可能去了火星，请重新输入！\n";
	return stu[0];
}

int main()
{
	char name[30];
	int No,Grade;
	Student* M=stu;

	for (int i=0;i<10;i++){
		std::cin>>name>>No>>Grade;
		stu[i].SetVal(name,No,Grade);
	//	stu[i].Display();
	}
	for(int i=0;i<10;i++){
		M=max(M,stu+i);
	}
	std::cout<<M->GetNo()<<"\n";
	Student newStu=Student(find(M->GetNo()));
	newStu.Display();
	return 0;
}
