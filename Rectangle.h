//
// Created by parrg on 23/05/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int widthIn,int heightIn);
    double area();
    void setDimensions(int widthIn,int heightIn);


};



#endif //RECTANGLE_H
