//
// Created by maxbu on 9/17/2023.
//

#include "eventC.h"



string eventC::check_data_transfer()  const{
    {
        if((scientist->getId() == 'E') && check_prime(getN1())){
            return "Data transfer";
        }
        else{
            return "No Data Transfer";
        }
    }
}

void eventC::print() const{
    cout << "Event "  << getType() << " : Has been registered" <<endl;
    cout << "Time travel has been achieved"<< endl;
    cout << "There was: " << check_data_transfer() << endl;
    cout << "Scientist Traveling: " << scientist->getNombre() << endl;
}

//getters
int eventC::getN1() const {
    return n1;
}


bool eventC::check_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool eventC::check_coprime(int a, int b) {
    if (gcd(a, b) == 1) {
        return true;
    }
    else{
        return false;
    }
}

 int eventC::gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


