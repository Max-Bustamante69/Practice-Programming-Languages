//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_SCIENTIST_H
#define LENGUAJES_DE_PROGRAMACION_SCIENTIST_H
#include <iostream>
#include <utility>

using namespace std;



class Scientist {
private:
    string name;
    char id;

public:
    explicit Scientist(string n): name(std::move(n)),id(name[0]){};


    //Default destructor


    [[nodiscard]] const string &getNombre() const {
        return name;
    }

    [[nodiscard]] char getId() const {
        return id;
    }

};




#endif //LENGUAJES_DE_PROGRAMACION_SCIENTIST_H
