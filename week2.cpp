#include "Vehicle.h"
using namespace std;

void CreateVehicle(Vehicle& v, int w = 4, int d = 2) {
    v.setWheels(w);
    v.setDoors(d);
}

int main(int argc, char** argv) {
    Vehicle original;              
    Vehicle copy(original);        
    Vehicle secondCopy(&original); 

    copy.printVehicle();

    CreateVehicle(copy, 2);        
    copy.printVehicle();

    CreateVehicle(copy, 2, 3);     
    copy.printVehicle();

    copy = secondCopy;            
    copy.printVehicle();

    return 0;
}
