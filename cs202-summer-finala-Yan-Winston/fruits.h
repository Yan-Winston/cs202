#ifndef FRUITS_H
#define FRUITS_H

#include "food.h"

class fruits: public food{
    private:
        bool needsPrep;
    public:
        fruits();
        fruits(bool, string, date&);
        fruits(const fruits&);

        void setNeedsPrep(bool);

        bool getNeedsPrep();

};
#endif