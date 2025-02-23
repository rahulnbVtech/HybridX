#include "electricCar.h"


std::string ElectricCar::Drive() { // inherited from car.h
	return "Drive ElectricCar";
}

double ElectricCar::FuelEfficiency() { // inherited from car.h
	return 10;
}

std::string ElectricCar::ChargeBattery() // unique to electric car, will be used in hybrid
{
	return "ChargeBattery ElectricCar";
}