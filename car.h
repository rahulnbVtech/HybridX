#include <string>

class Car {
public:
	virtual std::string Drive();
	virtual double FuelEfficiency();
	virtual std::string ChargeBattery();
	virtual std::string Refuel();
	virtual std::string SwitchMode();

};