#pragma once
#include "Employee.h"

class CommissionEmployee : public Employee {
    double sales;
    double rate;
public:
    CommissionEmployee(const std::string& n, double s, double sa, double r);
    double calculatePay() const override;
    void displayInfo() const override;
};
