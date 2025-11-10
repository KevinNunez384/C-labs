#include "CommissionEmployee.h"
#include <iostream>

CommissionEmployee::CommissionEmployee(const std::string& n, double s, double sa, double r)
    : Employee(n, s), sales(sa), rate(r) {
}

double CommissionEmployee::calculatePay() const {
    return baseSalary + (sales * rate);
}

void CommissionEmployee::displayInfo() const {
    std::cout << "Commission Employee: ";
    Employee::displayInfo();
    std::cout << ", Sales = " << sales << ", Rate = " << rate;
}
