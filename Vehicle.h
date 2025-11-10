#pragma once
#include <iostream>
#include <cstring>

class Vehicle {
private:
    int wheels;
    int doors;
    char* modelName;                
    static int vehicleCount;        

public:

    Vehicle();                     
    Vehicle(int w, int d, const char* name = "Generic");
    ~Vehicle();

    Vehicle(const Vehicle& other); 
    Vehicle(const Vehicle* other);  

    Vehicle& operator=(const Vehicle& other);

    int getDoors() const;
    int getWheels() const;
    const char* getModelName() const;
    void setDoors(int d);
    void setWheels(int w);
    void setModelName(const char* name);

    // Comparison operators
    bool operator==(const Vehicle& other) const;
    bool operator!=(const Vehicle& other) const;

    Vehicle& operator++();    //prefix ++
    Vehicle operator++(int);  //postfix ++
    Vehicle& operator--();    //prefix --
    Vehicle operator--(int);  //postfix --

    static int getVehicleCount() { return vehicleCount; }

    friend std::ostream& operator<<(std::ostream& os, const Vehicle& v);
};
