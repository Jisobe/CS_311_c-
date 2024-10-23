#include "Employee.h"
#include <stdexcept>

Employee::Employee(int baseSalary, int hourlyRate) {
	setBaseSalary(baseSalary);
	setHourlyRate(hourlyRate);
}

int Employee::calculateWage(int extraHours) {
	return (baseSalary + hourlyRate * extraHours);
}

int Employee::getBaseSalary() {
	return baseSalary;
}

int Employee::getHourlyRate() {
	return hourlyRate;
}

void Employee::setBaseSalary(int baseSalary) {
	if (baseSalary < 0) {
		throw std::invalid_argument("baseSalary");
	}
	this->baseSalary = baseSalary;
}

void Employee::setHourlyRate(int hourlyRate) {
	if (hourlyRate <= 0) {
		throw std::invalid_argument("hourlyRate");
	}
	this->hourlyRate = hourlyRate;
}