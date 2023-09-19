//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_SCIENTIST1_H
#define LENGUAJES_DE_PROGRAMACION_SCIENTIST1_H

#include "Scientist.h"

class Scientist1 : public Scientist {
public:
    Scientist1() : Scientist("Einstein") {};

    void print() {
        cout << "I am " << getNombre() << endl;
    };
};


#endif //LENGUAJES_DE_PROGRAMACION_SCIENTIST1_H
