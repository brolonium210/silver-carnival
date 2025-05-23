//
// Created by parrg on 23/05/2025.
//
#include <bits/stdc++.h>
#include "Shape.h"

Shape::Shape(const int l, const int h) {
    length = l;
    height = h;
}

int Shape::area() {
    return length*height;
}
int Shape::perimeter() {
    return ((length*2)+(height*2));
}

void Shape::draw() {
    std::cout<<"shape"<<std::endl;
}
