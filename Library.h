//
// Created by parrg on 23/05/2025.
//



#ifndef LIBRARY_H
#define LIBRARY_H

#include <map>
#include <string>

class Library {
private:
    std::map<std::string,int>myMap;
public:
    Library();
    void addBook(std::string name,int count);
    void removeBook(std::string name);
    void printBooks();

};



#endif //LIBRARY_H
