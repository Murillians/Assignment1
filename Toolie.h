//
// Created by Emilio on 2/2/2019.
//

#ifndef TOOLIE_H
#define TOOLIE_H

#include <string>
#include "Weapon.h"

class Toolie: public Weapon {
public:
    Toolie():Weapon("Toolie",42){};
    virtual ~Toolie();
    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_TOOLIE_H
