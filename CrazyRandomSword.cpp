//
// Created by Emilio on 2/1/2019.
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    std::random_device randdev;
    std::mt19937 randgen{randdev()};//creates random generator
    int armrnd=floor(armor/3);//cuts armor to third, casts to int
    std::uniform_int_distribution<> dmg(2,armrnd+1);//sets range for rand damage, [2,armrnd]
    double damage=(hitPoints-floor(dmg(randgen)));//calculates damage/generates rand num
    if (damage<0){return 0;}
    return damage;
}
