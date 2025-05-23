//
// Created by parrg on 23/05/2025.
//

#include "Dog.h"
#include<string>
#include<iostream>

Dog::Dog() {
    sound = "";
}
void Dog::makeSound() {
    sound = "bark";
    std::cout<<sound <<std::endl;
}