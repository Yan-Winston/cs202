#ifndef CAT_H
#define CAT_H

#include "Pet.h"

using namespace std;

class Cat : public Pet {
    public:
        Cat();
        Cat(const Cat&);
        Cat(float, int, char, string);
};
#endif