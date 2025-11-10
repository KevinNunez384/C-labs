#include "HourlyEmployee.h"
#include <iostream>

HourlyEmployee::HourlyEmployee(const std::string& n, double s, int h, double r)
    : Employee(n, s), hoursWorked(h), hourlyRate(r) {
}

double HourlyEmployee::calculatePay() const {
    return hoursWorked * hourlyRate;
}

void HourlyEmployee::displayInfo() const {
    std::cout << "Hourly Employee: ";
    Employee::displayInfo();
    std::cout << ", Hours Worked = " << hoursWorked
        << ", Hourly Rate = " << hourlyRate;
}
