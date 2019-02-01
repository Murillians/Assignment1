//
// Created by Emilio on 2/1/2019.
//
#include <string>
#include "Weapon.h"
#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H


class SimpleHammer: public Weapon {
    SimpleHammer():Weapon("Simple Hammer",25){};
    virtual ~SimpleHammer();
    virtual double hit(double armor);
};


#endif //ASSIGNMENT1_SIMPLEHAMMER_H
