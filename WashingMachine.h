//
// Created by parrg on 24/05/2025.
//

#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include "Appliance.h"


class WashingMachine:public Appliance {
private:
    int howBig;
public:
    WashingMachine(int howBig1);
    void run() override;

};



#endif //WASHINGMACHINE_H
