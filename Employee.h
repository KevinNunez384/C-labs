#pragma once
#include <string>

class Employee {
protected:
    std::string name;
    double baseSalary;
public:
    Employee(const std::string& n, double s);
    virtual ~Employee();
    virtual double calculatePay() const = 0;
    virtual void displayInfo() const;
};
