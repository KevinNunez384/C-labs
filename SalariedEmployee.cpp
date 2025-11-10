#include "SalariedEmployee.h"
#include <iostream>

SalariedEmployee::SalariedEmployee(const std::string& n, double s, double b)
    : Employee(n, s), bonus(b) {
}

double SalariedEmployee::calculatePay() const {
    return baseSalary + bonus;
}

void SalariedEmployee::displayInfo() const {
    std::cout << "Salaried Employee: ";
    Employee::displayInfo();
    std::cout << ", Bonus = " << bonus;
}
