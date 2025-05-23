//
// Created by parrg on 23/05/2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include <bits/stdc++.h>

class Square:public Shape {
private:


public:
    Square(const int l, const int h);
    void draw() override;
    int area()override;
    int perimeter()override;
};



#endif //SQUARE_H
