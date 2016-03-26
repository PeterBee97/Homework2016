#include"employee.h"

int main()
{
	employee Emp[4];
	int No,Grade,Pay;
	for (int i=0;i<4;i++)
	{
		std::cout<<"请输入员工编号：";
		std::cin>>No;
		Emp[i].SetNo(No);
		std::cout<<"请输入员工级别：";
		std::cin>>Grade;
		Emp[i].SetGrade(Grade);
		std::cout<<"请输入员工月薪：";
		std::cin>>Pay;
		Emp[i].SetPay(Pay);
	}
	for(int i=0;i<4;i++)
		Emp[i].Display();
	return 0;
}

