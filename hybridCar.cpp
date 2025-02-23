#include "electricCar.h"
#include "gasolineCar.h"

class HybridCar : public Car {
	std::string Drive() {
		return "Drive HybridCar";
	}

	double FuelEfficiency() {
		return 10;
	}

	std::string ChargeBattery() {
		return "ChargeBattery HybridCar";
	}

	std::string Refuel() {
		return "Refuel HybridCar";
	}

	std::string SwitchMode() {
		return "SwitchMode HybridCar";
	}
};