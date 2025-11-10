#include "Vehicle.h"
using namespace std;

int Vehicle::vehicleCount = 0;

Vehicle::Vehicle() : wheels(4), doors(2) {
    modelName = new char[strlen("Generic") + 1];
    strcpy(modelName, "Generic");
    ++vehicleCount;
}

Vehicle::Vehicle(int w, int d, const char* name) : wheels(w), doors(d) {
    modelName = new char[strlen(name) + 1];
    strcpy(modelName, name);
    ++vehicleCount;
}

Vehicle::~Vehicle() {
    delete[] modelName;
}

Vehicle::Vehicle(const Vehicle& other) : wheels(other.wheels), doors(other.doors) {
    modelName = new char[strlen(other.modelName) + 1];
    strcpy(modelName, other.modelName);
    ++vehicleCount;
}

Vehicle::Vehicle(const Vehicle* other) : wheels(other->wheels), doors(other->doors) {
    modelName = new char[strlen(other->modelName) + 1];
    strcpy(modelName, other->modelName);
    ++vehicleCount;
}

Vehicle& Vehicle::operator=(const Vehicle& other) {
    if (this != &other) {
        wheels = other.wheels;
        doors = other.doors;
        delete[] modelName;
        modelName = new char[strlen(other.modelName) + 1];
        strcpy(modelName, other.modelName);
    }
    return *this;
}

int Vehicle::getDoors() const { return doors; }
int Vehicle::getWheels() const { return wheels; }
const char* Vehicle::getModelName() const { return modelName; }
void Vehicle::setDoors(int d) { doors = d; }
void Vehicle::setWheels(int w) { wheels = w; }
void Vehicle::setModelName(const char* name) {
    delete[] modelName;
    modelName = new char[strlen(name) + 1];
    strcpy(modelName, name);
}

bool Vehicle::operator==(const Vehicle& other) const {
    return (wheels == other.wheels && doors == other.doors);
}
bool Vehicle::operator!=(const Vehicle& other) const {
    return !(*this == other);
}

Vehicle& Vehicle::operator++() { ++wheels; ++doors; return *this; }
Vehicle Vehicle::operator++(int) { Vehicle temp(*this); ++(*this); return temp; }
Vehicle& Vehicle::operator--() { --wheels; --doors; return *this; }
Vehicle Vehicle::operator--(int) { Vehicle temp(*this); --(*this); return temp; }

ostream& operator<<(ostream& os, const Vehicle& v) {
    os << "[Vehicle: " << v.wheels << " wheels, "
        << v.doors << " doors, Model: " << v.modelName << "]";
    return os;
}
