//
// Created by Emilio on 2/1/2019.
//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage=hitPoints-armor;
    if(armor<30){damage=hitPoints;}
    return damage;
}
