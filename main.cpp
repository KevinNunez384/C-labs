#include <iostream>
#include <vector>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"

int main() {
    std::vector<Employee*> staff;

    // Create objects (matches expected output example)
    staff.push_back(new SalariedEmployee("Alice", 5000.0, 500.0));
    staff.push_back(new HourlyEmployee("Bob", 0.0, 40, 20.0));
    staff.push_back(new CommissionEmployee("Carol", 3000.0, 10000.0, 0.1));

    for (const auto* e : staff) {
        e->displayInfo();
        std::cout << ", Total Pay = " << e->calculatePay() << std::endl;
    }

    for (auto* e : staff) delete e;
    return 0;
}
