//
// Created by parrg on 23/05/2025.
//
#include<map>
#include<iostream>
#include "Library.h"
#include<string>

Library::Library() {
}
void Library::addBook(std::string name,int count) {
    myMap.insert({name,count});
}
void Library::removeBook(std::string name) {
    bool myBool = myMap.contains(name);
    if (myBool) {
        myMap.erase(name);
    }
}
void Library::printBooks() {
    for (auto it = myMap.begin();it != myMap.end();it++) {
        std::cout <<it->first <<"    "<< it->second <<std::endl;
    }
}
