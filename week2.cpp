#include "Vehicle.h"
#include <iostream>
using namespace std;

void CreateVehicle(Vehicle& v, int w = 4, int d = 2) {
    v.setWheels(w);
    v.setDoors(d);
}

//Optional C++23 feature
consteval int compileTimeValue() { return 42; }
int calculate() {
    if consteval {
        return compileTimeValue();
    }
    else {
        return 24;
    }
}

int main() {
    cout << "Active vehicles: " << Vehicle::getVehicleCount() << endl;

    Vehicle original(4, 2, "Sedan");
    Vehicle copy(original);
    Vehicle secondCopy(&original);

    cout << original << endl;
    cout << copy << endl;

    CreateVehicle(copy, 2);
    cout << "After changing wheels: " << copy << endl;

    CreateVehicle(copy, 2, 3);
    cout << "After changing wheels & doors: " << copy << endl;

    copy = secondCopy;
    cout << "After assignment: " << copy << endl;

    cout << "Comparison operators demo: "
        << (copy == original ? "Equal" : "Not Equal") << endl;

    cout << "Increment / Decrement demo:" << endl;
    ++copy;
    cout << "Prefix ++: " << copy << endl;
    copy++;
    cout << "Postfix ++: " << copy << endl;
    --copy;
    cout << "Prefix --: " << copy << endl;
    copy--;
    cout << "Postfix --: " << copy << endl;

    cout << "Total Vehicle objects created: " << Vehicle::getVehicleCount() << endl;

    cout << "C++23 if consteval demo: " << calculate() << endl;

    return 0;
}
