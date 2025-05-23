//
// Created by parrg on 23/05/2025.
//
#include <bits/stdc++.h>
#include "Shape.h"

Shape::Shape(const int l, const int h) {
    length = l;
    height = h;
    //this looks fine just added for the issues test
    //it didnt auto close the first time hopefully it works this time

}

void Shape::draw() {
    std::cout<<"shape"<<std::endl;
}
