//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_EVENTC_H
#define LENGUAJES_DE_PROGRAMACION_EVENTC_H
#include "Event.h"

class eventC: public Event {
    Scientist* scientist;
    int n1;
public:
    eventC(Scientist* s, int n1, int n2): Event('C'), scientist(s), n1(n1){};

    int getN1() const;



    [[nodiscard]] string check_data_transfer() const;
    //how to know if two numbers are coprime
    [[nodiscard]]static int gcd(int a, int b);

    // Function to check if two numbers are coprime (have a GCD of 1)
    [[nodiscard]] static bool check_coprime(int a, int b);
    [[nodiscard]] static bool check_prime(int n) ;


    void print() const override;



};


#endif //LENGUAJES_DE_PROGRAMACION_EVENTC_H
