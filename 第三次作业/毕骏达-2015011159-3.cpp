#include"employee.h"

int main()
{
	employee* Emp[24];
	int No,Grade,Pay;
	for (int i=0;i<24;i++)
	{
		std::cout<<"请输入员工级别：";
		std::cin>>Grade;
		std::cout<<"请输入员工月薪：";
		std::cin>>Pay;
		Emp[i]=new employee(Grade,Pay);
	}
	for(int i=0;i<24;i++)
		Emp[i]->Display();
	return 0;
}

