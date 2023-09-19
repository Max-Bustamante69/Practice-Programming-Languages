#include <iostream>
#include <string>
#include "DoubleLinkedLists/DoubleLinkedList.h"
#include "Events/eventA.h"
#include "Events/eventB.h"
#include "Events/eventC.h"
#include "Scientist/Scientist1.h"
#include "Scientist/Scientist2.h"
#include <random>
using namespace std;



int main() {

    DoubleLinkedList list;
    for (int i = 0; i < 22; ++i) {
        list.random_add();
    }
    list.display_events();
    list.display();
    return 0;
}
