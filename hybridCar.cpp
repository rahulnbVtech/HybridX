#include "hybridCar.h"


std::string HybridCar::Drive() { // inherited method
	return "Drive HybridCar";
}

double HybridCar::FuelEfficiency() { // inherited method from gasoline
	return 10;
}

std::string HybridCar::ChargeBattery() { // inherited method
	return "ChargeBattery HybridCar";
}

std::string HybridCar::Refuel() { // inherited method
	return "Refuel HybridCar";
}

std::string HybridCar::SwitchMode() { // unique method
	return "SwitchMode HybridCar";
}