#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public GasolineCar, public ElectricCar {
public:
	std::string Drive() override;
	double FuelEfficiency() override;
	std::string ChargeBattery() override;
	std::string Refuel() override;
	std::string SwitchMode();
};

#endif