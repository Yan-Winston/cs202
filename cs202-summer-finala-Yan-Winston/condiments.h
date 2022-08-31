#ifndef CONDIMENTS_H
#define CONDIMENTS_H

#include "food.h"

class condiments: public food{
    bool needsKnife;

    public:
        condiments();
        condiments(bool, string, date&);
        condiments(const condiments&);
        bool getNeedsKnife();
        void setNeedsKnife(bool);
};
#endif
