#ifndef AGENCY_H
#define AGENCY_H

#define BUFF_SIZE 70

#include "car.h"

class Agency{
	string name;
	int numCars;
	Car fleet[BUFF_SIZE];

public:
	Agency();
	Agency(string);
	Agency(const Agency&);

	string getName();
	int getNumCar();
	Car* getFleet();

	void setName(string);
 
	bool addCar(Car);
	void print();
};

#endif