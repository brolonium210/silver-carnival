//
// Created by parrg on 23/05/2025.
//

#include "Circle.h"
#include <bits/stdc++.h>

Circle::Circle(const int l, const int h ,int r1): Shape(l,h),r(r1) {}

int Circle::area() {
    return 3.14 * (r*r);
    }
int Circle::perimeter() {
    return 2 * 3.14 * r;
    }


void Circle::draw() {
    std::cout<<"circle"<<std::endl;
    }