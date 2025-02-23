#include "car.h"

class GasolineCar : public Car {
	std::string Drive() {
		return "Drive GasolineCar";
	}

	double FuelEfficiency() {
		return 10;
	}

	std::string Refuel() {
		return "Refuel GasolineCar";
	}
};