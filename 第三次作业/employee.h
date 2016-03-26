/*
 * Copyright (c) 2015-~ Peter Bee
 *
 * This source code is released for free distribution under the terms of the
 * GNU General Public License
 *
 * Author:       Peter Bee bjd97@qq.com>
 * Created Time: 一  2/22 21:53:45 2016
 * File Name:    employee.h
 *
 * Description:  
 */

#ifndef __H
#define __H
#include<iostream>
class employee
{
	public:
		void SetNo(int No);
		void SetGrade(int newGrade);
		void SetPay(int Pay);
		void Display(void);
		employee(int Grade=0,int Pay=0);
		employee();
		~employee();
	private:
		static int UniversalEmpNo;
		int individualEmpNo;
		int grade;
		int accumPay;
};
employee::employee(int Grade,int Pay)
{
	individualEmpNo=++UniversalEmpNo;
	grade=Grade;
	accumPay=Pay;
}
void employee::SetGrade(int newGrade)
{
	grade = newGrade;
}
void employee::SetPay(int Pay)
{
	accumPay = Pay;
}
void employee::Display(void)
{
	std::cout<<"\n员工";
	std::cout<<"编号："<<individualEmpNo<<std::endl;
	std::cout<<"级别："<<grade<<std::endl;
	std::cout<<"月薪："<<accumPay<<std::endl;
}
employee::~employee()
{
	std::cout<<"欢迎使用，再见";
}
int employee::UniversalEmpNo=0;
#endif
