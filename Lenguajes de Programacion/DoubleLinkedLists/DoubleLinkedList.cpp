//
// Created by maxbu on 9/17/2023.
//

#include "DoubleLinkedList.h"
#include "../Scientist/Scientist2.h"
#include "../Scientist/Scientist1.h"
#include "../Events/eventA.h"
#include "../Events/eventB.h"
#include "../Events/eventC.h"

//include random
#include <iostream>
#include <string>
#include <random>

DoubleLinkedList::DoubleLinkedList() : head(nullptr), prime_numbers(0) {}

void DoubleLinkedList::add(int valor) {

    Node *newNode = new Node(valor);
    //Scientist Check
    newNode->scientist = check_scientist(valor);
    //Event Check
    newNode->event = eventC::check_prime(valor)||prime_numbers == 2 ? check_event(newNode->scientist, valor) : nullptr;

    if (!head) {
        head = newNode;
    } else {
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void DoubleLinkedList::random_add() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    int randomNumber = dist(mt);
    add(randomNumber);
}


DoubleLinkedList::~DoubleLinkedList() {
    while (head != nullptr) {
        Node *current = head;
        head = head->next;
        delete current->event;      // Delete the event associated with the node
        delete current->scientist;  // Delete the scientist associated with the node
        delete current;             // Delete the node itself
    }
}

Scientist *DoubleLinkedList::random_scientist() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 2);
    int randomNumber = dist(mt);

    if (randomNumber == 1) {
        return new Scientist1();
    } else {
        return new Scientist2();
    }
}

Event *DoubleLinkedList::check_event(Scientist *s, int n1) {

    switch (prime_numbers) {
        case 0:
            prime_numbers++;
            aEvents.push_back(n1);
            return new eventA();
        case 1:
            prime_numbers++;
            return new eventB();
        case 2:
            if(eventC::check_coprime(aEvents[0], n1)){
                prime_numbers = 0;
                return new eventC(s, aEvents[0], n1);
            }
            else{
                return nullptr;
            }
        default:
            return nullptr;
    }
}


Scientist *DoubleLinkedList::check_scientist(int n) const {
    if (eventC::check_prime(n) && prime_numbers == 0) {
        return new Scientist1();
    } else {
        return random_scientist();
    }
}

void DoubleLinkedList::display() {
    Node *current = head;
    while (current != nullptr) {
        print_node(current);
        cout << endl;
        current = current->next;
    }
}

void DoubleLinkedList::display_events() {
    Node *current = head;
    while (current != nullptr) {
        if (current->event != nullptr) {
            eventNodes.push_back(current);
            current->event->print();
            cout << endl << "----------------------------" << endl;
            for (Node *node: eventNodes) {
                print_node(node);
            }
            cout << endl << "----------------------------" << endl;

            if (eventNodes.size() == 3) {
                eventNodes.clear();
            }
        }
        current = current->next;
    }
}

void DoubleLinkedList::print_node(Node *node) {
    char tipo = node->event != nullptr ? node->event->getType() : ' ';
    cout << "|" << node->prev << "| " << node->scientist->getId() << " | " << node->dato
         << " | " << tipo << " |" << node->next << "|";
    if (node->next != nullptr) {
        cout << " ---->";
    }

}
















/*Sí la variable datos del evento C es un número entero no primo
  pero es coprimo de la variable datos del evento A,
  significa que se ha producido una singularidad que permite que el científico 2 viaje en el tiempo sólo a observar, pero si la variable datos del evento C es un número primo quiere decir que además
  de viajar en el tiempo, el científico 2 pudo entregarle información al Científico 1 para crear la máquina que permita viajar en el tiempo, de lo contrario indica que si bien se creó la máquina para viajar
  en el tiempo, fue sin intercambio de información del científico del futuro, es decir el científico 2 pudo viajar al pasado, pero sólo a observar.*/


