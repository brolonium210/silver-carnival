//
// Created by parrg on 23/05/2025.
//
#ifndef SHAPE_H
#define SHAPE_H

#include <bits/stdc++.h>



class Shape {
public:
    virtual ~Shape() = default;

    Shape(int l,int h);
    int length;
    int height;
    virtual void draw();
    virtual int area() = 0;
    virtual int perimeter() = 0;

};



#endif //SHAPE_H
