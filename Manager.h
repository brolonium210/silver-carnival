//
// Created by parrg on 23/05/2025.
//

#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include<string>
#include"Employee.h"


class Manager:public Employee {
private:
    int teamSize;
public:
    Manager(std::string nameIn,std::string idIn,int ts);
    void printInfo()override;

};



#endif //MANAGER_H
