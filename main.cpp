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
#include "AddressBookEntry.h"

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
    //this also might help with the issues test

    // Circle c(2,4,3);

    std::vector<AddressBookEntry>book;
    struct AddressBookEntry a = {"john","john@guy","12345"};
    struct AddressBookEntry b = {"quincy","quincy@guy","1238"};
    struct AddressBookEntry c = {"addington","adder@guy","1239"};
    book.push_back(a);
    book.push_back(b);
    book.push_back(c);

    for (const auto& entry : book) {
        std::cout << entry.name << " " << entry.email << " " << entry.phone << std::endl;


    }




    return 0;
}
