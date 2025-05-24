//
// Created by parrg on 24/05/2025.
//

#ifndef MICROWAVE_H
#define MICROWAVE_H
#include "Appliance.h"


class Microwave:public Appliance {
private:
    int watts;
public:
    Microwave(int wattsIn);
    void run() override;
};



#endif //MICROWAVE_H
