//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_EVENT_H
#define LENGUAJES_DE_PROGRAMACION_EVENT_H
#include <vector>
#include "../Scientist/Scientist.h"




class Event {
private:
    char type;



public:
    explicit Event(char t): type(t){};

    [[nodiscard]] char getType() const {
        return type;
    }

    virtual void print() const {
        cout << "Event "  << getType() << ": Has been registered" <<endl;
    }

};




#endif //LENGUAJES_DE_PROGRAMACION_EVENT_H
