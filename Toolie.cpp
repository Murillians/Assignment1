//
// Created by Emilio on 2/2/2019.
// based on the discrete_distribution example at
//https://en.cppreference.com/w/cpp/numeric/random/discrete_distribution
//this weapon has a 1/3 chance of dealing 3x hitpoint damage (armor ignored) or no damage

#include "Toolie.h"

double Toolie::hit(double armor) {
    std::random_device randdev;
    std::mt19937 randgen{randdev()};//creates random generator
    std::uniform_int_distribution<> dmg(0,4);//sets range for rand damage, [0,3]
    int chance=(dmg(randgen)%3);//returns value between 0-2
    if(chance==1){
        std::cout<<"a critical hit! Deals ";
        return hitPoints*3.0;
    }
    return 0;
}
