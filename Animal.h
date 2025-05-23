//
// Created by parrg on 23/05/2025.
//

#ifndef ANIMAL_H
#define ANIMAL_H
#include<string>

class Animal {

public:
    Animal();
    std::string sound;
    virtual void makeSound();
    inline void makeItSpeak();

};

#endif //ANIMAL_H
