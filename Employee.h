#pragma once
class Employee
{
private:
	int baseSalary;
	int hourlyRate;
	int getBaseSalary();
	int getHourlyRate();
	void setBaseSalary(int baseSalary);
	void setHourlyRate(int hourlyRate);
public:
	Employee(int baseSalary, int hourlyRate);
	int calculateWage(int extraHours);


};

