//
// Created by parrg on 24/05/2025.
//

#include "WashingMachine.h"
#include<iostream>

WashingMachine::WashingMachine(int howBig1) {
    howBig = howBig1;
}
void WashingMachine::run() {
        std::cout << "Washing load size " << howBig << std::endl;
}









