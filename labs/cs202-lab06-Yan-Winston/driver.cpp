#include <iostream>
using namespace std;

#include "pet.h"
#include "person.h"

#define NUM_PETS 2
#define NUM_PEOPLE 3

template <typename T>
int getOption(int numberOfObjects, T list[], string header) {
	int temp = 0;
	cout << header << endl;
	for (int i=0; i < numberOfObjects; i++) {
		cout << i+1 << ".      " << list[i] << endl;
	}
	cout << "Choose the number option: ";
	cin >> temp;
	cout << endl;
	return temp;
}

int main(){
	Pet petStore[NUM_PETS];	
	Pet pet("cat", "Hera");
	petStore[0] = pet;
	pet.setSpecies("dog");
	pet.setName("Lucky");
	petStore[1] = pet;
	getOption<Pet>(2, petStore, "***PETS***");

	Person team[NUM_PEOPLE];	
	Person person("Erin", "Keith", "ekeith@unr.edu");
	team[0] = person;
	person.setFirstName("Luke");
	person.setLastName("Skywalker");
	person.setEmail("KorlMarcus@jedi.net");
	team[1] = person;
	person.setFirstName("Thomas");
	person.setLastName("Anderson");
	person.setEmail("neo@matrix.com");
	team[2] = person;
	getOption<Person>(3, team, "***PEOPLE***");

	int array[] = {1, 2, 3, 4, 5};
	getOption<int>(5, array, "***NUMBER***");

	return 0;
}
