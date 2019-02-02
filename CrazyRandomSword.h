//
// Created by Emilio on 2/1/2019.
//

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

#include <string>
#include "Weapon.h"
#include <random>
class CrazyRandomSword:public Weapon {

int hitgen(){
    std::random_device randdev;
    std::mt19937 randgen{randdev()};//creates random generator
    std::uniform_int_distribution<> hprand(7,101);
    return hprand(randgen);
    }

public:

    CrazyRandomSword():Weapon("CrazyRandomSword",hitgen()){};
    virtual ~CrazyRandomSword(){};
    virtual double hit(double armor);

};


#endif //ASSIGNMENT1_CRAZYRANDOMSWORD_H
