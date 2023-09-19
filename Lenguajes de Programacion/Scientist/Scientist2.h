//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_SCIENTIST2_H
#define LENGUAJES_DE_PROGRAMACION_SCIENTIST2_H
#include "Scientist.h"

class Scientist2: public Scientist {
public:
    Scientist2() : Scientist("Rosen") {}

    void print(){
        cout << "I am " << getNombre() << endl;
    };

    ~Scientist2(){
        cout << "I am " << getNombre() << " and I am dying" << endl;
    }


};


#endif //LENGUAJES_DE_PROGRAMACION_SCIENTIST2_H
