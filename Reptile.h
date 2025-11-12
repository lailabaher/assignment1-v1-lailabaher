#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class reptile : public animal
{
   private :
       bool isVenomous;
    public:
        reptile();
        reptile(string name, int age, bool isHungry, bool isVenomous);
        ~reptile();
};

#endif // REPTILE_H









#endif
