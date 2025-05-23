#include <iostream>
#include<string>
#include <utility>
#include<vector>
#include<list>
#include<map>
#include <bits/stdc++.h>
#include "Animal.h"
#include "Circle.h"
#include "Shape.h"
#include "Square.h"

using namespace std;



void makeItSpeak(Animal* a) {
    a->makeSound();
}

void render(Shape* s) {
    s->draw();
}



int main() {
    // Shape s;
    // Circle c;
    // Square q;

    // Shape* ptrShape = &s;
    // Shape* ptrCircle = &c;
    // Shape* ptrSquare = &q;
    //
    // render(ptrShape);
    // render(ptrCircle);
    // render(ptrSquare);

    Circle c(2,4,3);



    return 0;
}
