//
// Created by parrg on 23/05/2025.
//

#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog :public Animal {
public:
    Dog();
    void makeSound() override;
};
#endif //DOG_H
