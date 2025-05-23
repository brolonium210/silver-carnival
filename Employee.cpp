//
// Created by parrg on 23/05/2025.
//

#include "Employee.h"
#include<string>
#include<iostream>

Employee::Employee(std::string nameIn,std::string idIn) {
    name = nameIn;
    id = idIn;
}
void Employee::printInfo() {
    std::cout<<name<<"  "<<id<<std::endl;
}