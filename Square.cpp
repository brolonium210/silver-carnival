//
// Created by parrg on 23/05/2025.
//

#include "Square.h"
#include <bits/stdc++.h>

Square::Square(const int l, const int h):Square(l,h){}
void Square::draw() {
    std::cout<<"square"<<std::endl;
}

int Square::area() {
    return length*height;
}
int Square::perimeter() {
    return ((length*2)+(height*2));
}









