//
// Created by Emilio on 2/1/2019.
//

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage=armor-hitPoints;
    if(armor<30){damage=hitPoints;}
    if (damage<0){return 0;}
    return damage;
}
