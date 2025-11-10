#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& n, double s)
    : name(n), baseSalary(s) {
}

Employee::~Employee() = default;

void Employee::displayInfo() const {
    std::cout << "Name = " << name
        << ", Base Salary = " << baseSalary;
}
