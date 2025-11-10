#pragma once
#include "Employee.h"

class HourlyEmployee : public Employee {
    int hoursWorked;
    double hourlyRate;
public:
    HourlyEmployee(const std::string& n, double s, int h, double r);
    double calculatePay() const override;
    void displayInfo() const override;
};
