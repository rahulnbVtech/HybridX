#ifndef GASCAR_H
#define GASCAR_H

#include "car.h"


class GasolineCar :  public virtual Car {
public:
	std::string Drive() override;
	double FuelEfficiency() override;
	virtual std::string Refuel();
};

#endif