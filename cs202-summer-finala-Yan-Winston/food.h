#ifndef FOOD_H
#define FOOD_H

#include <iostream>
using namespace std;
#include "date.h"

class food{
    protected: 
        string name;
        date bestBy;
        int expire;
    public:
        food();
        food(string, date&);
        food (const food&);

        void setBestByDate(date&);
        void setFoodName(string);

        date getBestByDate();
        string getFoodName();

        int checkIfSafeToEat(date d);
};
#endif