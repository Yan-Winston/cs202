#ifndef DOG_H
#define DOG_H

#include "Pet.h"

using namespace std;

class Dog : public Pet{
    public:
        Dog();
        Dog(const Dog&);
        Dog(float, int, char, string);
};
#endif