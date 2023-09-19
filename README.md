# Time Travel Simulation Code Documentation

This documentation provides an overview of the time travel simulation project. The project involves creating a doubly linked list to represent unique temporal events. Each node in the list represents a temporal event, and the pointers between nodes can point both to the past and the future. This project is developed for the course "ST0244 Programming Languages" at Universidad EAFIT during the second semester of 2023.

## Table of Contents

- [Introduction](#introduction)
- [Project Team](#project-team)
- [Project Events](#project-events)
- [Project Scenario](#project-scenario)
- [Restrictions](#restrictions)
- [Code Overview](#code-overview)
  - [DoubleLinkedList Class](#doublelinkedlist-class)
  - [Node Structure](#node-structure)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction

This project involves the creation of a doubly linked list to represent a series of unique temporal events. Each event is connected through pointers that can traverse both into the past and into the future. The project explores a scenario where events unfold, starting with an initial scientific investigation and leading to discoveries and interactions between two scientists. The objective is to manage these events and scientists within a consistent timeline while adhering to specific constraints to avoid temporal paradoxes.


## Project Team

This project was developed by the team composed of:

- **Maximiliano Bustamante**
  - Role: Coding structure and .cpp logic

- **Valeria Hornung**
  - Role: UML structuration and .h logic

This team collaborated on the successful development and completion of this project.


## Project Events

How Every Event Works:

- Event A: It is an event that occurred in the past and only appears when the 'datos' variable contains a prime number; otherwise, it is a normal event from the past. When Event A appears, it signifies that Einstein has initiated his investigation into time travel.
- Event B: It is an event that occurred in the past and only appears when the 'datos' variable contains a prime number. This can only happen if an Event A has occurred before, and it signifies that the time travel machine allowing time travel has been built.
- Event C: It is an event that occurred in the "future" and only appears when the 'datos' variable is coprime with the 'datos' variable from Event A. This can only occur if an Event B has occurred before and signifies that Scientist 2 has traveled to the past and has been able to observe at least Events B and A.


## Project Scenario

Every Project scneario well explained: 

- If the 'datos' variable of Event C is a non-prime integer but is coprime with the 'datos' variable of Event A, it means that a singularity has occurred, allowing Scientist 2 to travel through time only to observe. However, if the 'datos' variable of Event C is a prime number, it signifies that, in addition to time travel, Scientist 2 could provide information to Scientist 1 to create the time travel machine. Otherwise, it indicates that while the time travel machine was created, there was no exchange of information from the future scientist. In other words, Scientist 2 could travel to the past but only to observe.

- Only Einstein can pass information to himself or receive information from Rosen. There cannot be a Rosen who passes information to himself, but there can be a Rosen who passes information to Einstein.

- To ensure that the timeline (the list) remains consistent, the list must have a minimum size of 3 nodes and a maximum size of 22 nodes.

- The 'datos' variable of each node should be populated with a random integer between 1 and 100. Similarly, the 'cienífico' variable should be provided with a function that returns a random value between 1 and 2, indicating that if it is 1, then the scientist is "Einstein," and if it is 2, the scientist is "Rosen."



## Restrictions

Restrictions imposed to prevent temporal paradoxes and ensure a consistent timeline:

- If the 'datos' variable of Event C is a non-prime integer but coprime with the 'datos' variable of Event A, it signifies a singularity that allows Scientist 2 to travel to the past only for observation.
- If the 'datos' variable of Event C is a prime number, it means that Scientist 2 not only traveled in time but also shared information with Scientist 1 to create the time travel machine.
- Only Einstein can share information with himself or receive information from Rosen. There cannot be a Rosen who shares information with himself.
- The doubly linked list must have a minimum size of 3 nodes and a maximum size of 22 nodes.
- The 'datos' variable of each node should be populated with a random integer between 1 and 100, and the 'cienfico' variable should be randomized between 1 and 2.

## Code Overview

Provide an overview of the code structure and main components.

## DoubleLinkedList Class

The `DoubleLinkedList` class is a fundamental part of the time travel simulation code. It manages a doubly linked list of nodes, with each node representing a temporal event. Below is a breakdown of its key attributes and functions:

### Attributes

- `Node`: A private nested struct within the `DoubleLinkedList` class. Each `Node` represents an event and has the following attributes:
  - `prev`: A pointer to the previous node in the doubly linked list.
  - `event`: A pointer to an instance of an `Event` object, indicating the type of event associated with this node (e.g., Event A, Event B, or Event C).
  - `dato`: An integer value that holds data associated with the event.
  - `scientist`: A pointer to an instance of a `Scientist` object, signifying the scientist associated with this event.
  - `next`: A pointer to the next node in the doubly linked list.
  - `explicit Node(int valor)`: An explicit constructor that initializes a `Node` with the given 'valor' as the data (stored in `dato`). It sets `prev`, `next`, `event`, and `scientist` to `nullptr` by default.

- `head`: A pointer to the head of the doubly linked list, representing the first event in the timeline.

- `aEvents`: A vector that stores integers representing events of type A. These are events triggered when the 'datos' variable in a node contains a prime number.

- `prime_numbers`: An integer variable that keeps track of the number of prime number events encountered in the timeline.

- `eventNodes`: A vector that stores pointers to nodes that correspond to specific events. It is used for displaying events.

### Functions

- `add(int valor)`: Adds a new node to the doubly linked list with the provided 'valor' as data. It checks and assigns the appropriate event type and scientist based on specific conditions.

- `random_add()`: Adds a node with a random 'valor' (integer between 1 and 100) to the list.

- `display()`: Displays the entire list of events, including their associated data and scientists.

- `display_events()`: Displays events in the list, including Event A, Event B, and Event C, and ensures the display is consistent by tracking event nodes.

- `check_scientist(int n)`: Checks and returns the scientist associated with an event based on specific conditions.

- `check_event(Scientist *s, int n1)`: Checks and returns the appropriate event based on the scientist and 'datos' values.

- `print_node(Node* node)`: A static function that prints the attributes of a node, including its previous and next pointers, scientist, data (dato), and event type.

The `DoubleLinkedList` class is central to organizing and managing the timeline of temporal events in the simulation.


### Node Structure

The `Node` struct is a fundamental building block in the time travel simulation code. It represents a single node within a doubly linked list, where each node corresponds to a temporal event. Below is a breakdown of its attributes:

- `prev`: A pointer to the previous node in the doubly linked list.
- `event`: A pointer to an instance of an `Event` object, representing the type of event associated with this node (e.g., Event A, Event B, or Event C).
- `dato`: An integer value that holds data associated with the event.
- `scientist`: A pointer to an instance of a `Scientist` object, indicating the scientist associated with this event.
- `next`: A pointer to the next node in the doubly linked list.

Additionally, there is an explicit constructor for the `Node` struct, which initializes its attributes:
- `Node(int valor)`: The constructor initializes the node with the given 'valor' as the data (stored in `dato`). It sets `prev`, `next`, `event`, and `scientist` to `nullptr` by default.

This `Node` struct is central to organizing the temporal events and their associated data within the simulation.


## Usage

## Usage

To use the double linked list in your C++ program, you can follow the code example below:

```cpp
#include <iostream>
#include "DoubleLinkedLists/DoubleLinkedList.h"
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
````

## Contributing

Any recomendation on the improvement on the code is well recieved

