#include<iostream>

using namespace std;

namespace CST8219 {
	class Vehicle {
	private:
		int numWheels;
		int numDoors;
	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}

		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameter, wheels = " << w << endl;
		}

		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}

		~Vehicle() {
			cout << "In destructor" << endl;
		}

		void display() const {
			cout << "Vehicle has " << numDoors << " doors and " << numWheels << " wheels." << endl;
		}
	};
}

int main(int argc, char** argv) {
	CST8219::Vehicle v1;
	CST8219::Vehicle v2(4, 2);
	cout << "Size of v1: " << sizeof(v1) << " bytes\n";
	cout << "Size of v2: " << sizeof(v2) << " bytes\n";

	CST8219::Vehicle* pVehicle = nullptr;

	char choice;

	do {
		int d, w;
		cout << "Enter number of doors (>0): ";
		cin >> d;
		cout << "Enter number of wheels (>0): ";
		cin >> w;

		if (d > 0 && w > 0) {
			delete pVehicle;
			pVehicle = new CST8219::Vehicle(w, d);
			pVehicle->display();
			cout << "Size of pointer pVehicle: " << sizeof(pVehicle) << " bytes\n";

		} else {
			cout << "Invalid input, please try again.\n";
		}

		cout << "Do you want to create another vehicle? (Y/N)";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	delete pVehicle;

	return 0;
}
