//
// Created by Emilio on 2/1/2019.
//

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    std::random_device randdev;
    std::mt19937 randgen{randdev()};//creates random generator
    int armrnd=floor(armor/3);//cuts armor to third, casts to int
    std::uniform_int_distribution<> dmg(2,armrnd+1);//sets range for rand damage, [2,armrnd]
    int damage=(hitPoints-dmg(randgen));//calculates damage/generates rand num
    return damage;
}
