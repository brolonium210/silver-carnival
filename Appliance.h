//
// Created by parrg on 24/05/2025.
//

#ifndef APPLIANCE_H
#define APPLIANCE_H



class Appliance {
public:
    Appliance();
    //this needs to not be instantiatable on its own
    virtual void run() = 0;
};



#endif //APPLIANCE_H
