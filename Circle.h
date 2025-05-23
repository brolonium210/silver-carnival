//
// Created by parrg on 23/05/2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <bits/stdc++.h>

class Circle:public Shape {
private:

public:
    int r;
    void draw()override;

    Circle(int l, int h, int r1);

    int area()override;
    int perimeter()override;
};



#endif //CIRCLE_H
