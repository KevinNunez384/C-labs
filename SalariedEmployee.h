#pragma once
#include "Employee.h"

class SalariedEmployee : public Employee {
    double bonus;
public:
    SalariedEmployee(const std::string& n, double s, double b);
    double calculatePay() const override;
    void displayInfo() const override;
};
