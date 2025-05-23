//
// Created by parrg on 23/05/2025.
//

#include "Manager.h"
#include "Employee.h"

Manager::Manager(std::string nameIn,std::string idIn,int ts):
Employee(nameIn,idIn), teamSize(ts){}

void Manager::printInfo() {
        std::cout << name <<" "<< id << " "<<teamSize<<std::endl;
}

