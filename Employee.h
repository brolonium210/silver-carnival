//
// Created by parrg on 23/05/2025.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>


class Employee {
private:
public:
    std::string name;
    std::string id;
    Employee(std::string nameIn,std::string idIn);
    virtual void printInfo();
};



#endif //EMPLOYEE_H
