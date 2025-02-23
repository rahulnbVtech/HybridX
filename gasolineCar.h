#include <string>
#include "car.h"


class GasolineCar : public Car {
public:
	std::string Drive();
	double FuelEfficiency();
	std::string Refuel();
};