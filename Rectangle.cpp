//
// Created by parrg on 23/05/2025.
//

#include "Rectangle.h"

Rectangle::Rectangle(int widthIn,int heightIn) {
    width = widthIn;
    height = heightIn;
}

Rectangle::Rectangle() {
    width = 10;
    height = 5;

}
double Rectangle::area() {
    double out = width*height;
    return out;
}
void Rectangle::setDimensions(int w, int h) {
    width = w;
    height = h;
}

/*  myClass::myClass(int w,int h):width(w),height(h){}
 *  myClass::myClass(int w,int h):width(w),height(h){}
 *
 *
 *
 *
 *
 *
 *
 */
