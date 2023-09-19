//
// Created by maxbu on 9/17/2023.
//

#ifndef LENGUAJES_DE_PROGRAMACION_DOUBLELINKEDLIST_H
#define LENGUAJES_DE_PROGRAMACION_DOUBLELINKEDLIST_H

#include <string>
#include <iostream>
#include <vector>
#include "../Scientist/Scientist.h"
#include "../Events/Event.h"

using namespace std;


class DoubleLinkedList {
private:
    struct  Node{
        Node* prev;
        Event* event;
        int dato;
        Scientist* scientist;
        Node* next;
        explicit Node(int valor):prev(nullptr),dato(valor),next(nullptr),event(nullptr),scientist(nullptr) {};
    };
    Node* head;
    vector<int> aEvents;
    int prime_numbers;
    vector<Node*> eventNodes;


public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void add(int valor);
    static Scientist* random_scientist();
    void random_add();
    void display();
    void display_events();
    [[nodiscard]] Scientist * check_scientist(int n) const;
    Event *check_event(Scientist *s, int n1);
    static void print_node(Node* node);
};



#endif //LENGUAJES_DE_PROGRAMACION_DOUBLELINKEDLIST_H
