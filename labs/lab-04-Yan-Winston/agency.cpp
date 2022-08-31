#include "agency.h"

Agency::Agency(){
	name = "";
	numCars = 0;
}
Agency::Agency(string newName){
	name = newName;
	numCars = 0;
}
Agency::Agency(const Agency& rhs){
	name = rhs.name;
	numCars = rhs.numCars;
	for (int i=0; i<numCars; i++) {
		fleet[i] = rhs.fleet[i];
	}
}

string Agency::getName(){
	return name;
}

void Agency::setName(string newName){
	name = newName;
}
 
void Agency::print(){
	cout << name << endl;
	cout << "==============" << endl;
	for (int i=0; i<numCars; i++){
		fleet[i].print(); 
	}
}

int Agency::getNumCar() {
	return numCars;
}

Car* Agency::getFleet() {
	return fleet;
}
 
bool Agency::addCar(Car c) {
	if (numCars < 70) {
		fleet[numCars] = c;
		numCars++;
		return true;
	} else {
		return false;
	}
}