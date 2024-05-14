// Plan_generite.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <String>

enum class of_class1 {
	OF_CLASS1_LIFE,
	OF_CLASS1_PROFESSION,
	OF_CLASS1_GWTM,
	OF_CLASS1_MAX
};

enum class of_class2 {
	OF_CLASS2_BASE,
	OF_CLASS2_WORK,
	OF_CLASS2_SCIENCE,
	OF_CLASS2_ART,
	OF_CLASS2_LITERAY,
	OF_CLASS2_EXP,
	OF_CLASS2_MAX
};

class Plan
{
public:
	Plan(std::string plan_name, unsigned int task1, unsigned int task2, std::string task3, double prior);
	void Plan_show_name();
	~Plan();

private:
	std::string plan_name;
	unsigned int task1;
	unsigned int task2;
	std::string task3;
	double prior;
};

Plan::Plan(std::string plan_name, unsigned int task1, unsigned int task2, std::string task3, double prior)
{
	this->plan_name = plan_name;
	this->task1 = task1;
	this->task2 = task2;
	this->task3 = task3;
	this->prior = prior;
}

Plan::~Plan()
{
}

void Plan::Plan_show_name()
{
	std::cout << "plan name is " << this->plan_name << "  ||  "
			  << "task3 is " << task3 << std::endl;
}