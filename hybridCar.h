#include <string>
#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public GasolineCar, public ElectricCar {
public:
	std::string Drive();
	double FuelEfficiency();
	std::string ChargeBattery();
	std::string Refuel();
	std::string SwitchMode();
};