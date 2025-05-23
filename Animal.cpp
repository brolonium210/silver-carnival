//
// Created by parrg on 23/05/2025.
//

#include "Animal.h"
#include<iostream>

Animal::Animal(){}
void Animal::makeSound() {
    sound = "rawr";
    std::cout<<sound <<std::endl;
}

inline void Animal::makeItSpeak() {
    void makeSound();
}
