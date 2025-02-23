#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "car.h"

class ElectricCar :  public virtual Car {
public:
	std::string Drive() override;
	double FuelEfficiency() override;
	virtual std::string ChargeBattery();
};

#endif 