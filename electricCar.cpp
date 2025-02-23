#include <string>
#include "car.h"

class ElectricCar : virtual public Car {
	std::string ElectricCar::Drive() {
		return "Drive ElectricCar";
	}

	double ElectricCar::FuelEfficiency() {
		return 10;
	}

	std::string ChargeBattery() {
		return "ChargeBattery ElectricCar";
	}
};