#include <string>
#include "car.h"

class ElectricCar : public Car {
public:
	std::string ElectricCar::Drive();
	double ElectricCar::FuelEfficiency();
	std::string ChargeBattery();
};