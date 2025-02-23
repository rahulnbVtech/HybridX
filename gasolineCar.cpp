#include "gasolineCar.h"


std::string GasolineCar::Drive() { // drive for gasoline car, inherited from car.h
	return "Drive GasolineCar";
}

double GasolineCar::FuelEfficiency() { // fuel effeciency inherited from car.h
	return 10;
}

std::string GasolineCar::Refuel() { // refuel, unique method to gasoline, will be used in hybrid
	return "Refuel GasolineCar";
}