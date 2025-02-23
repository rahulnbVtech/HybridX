#include <string>
#include "car.h"

class GasolineCar : virtual public Car {
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