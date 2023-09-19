# Time Travel Simulation Code Documentation

This documentation provides an overview of the time travel simulation project. The project involves creating a doubly linked list to represent unique temporal events. Each node in the list represents a temporal event, and the pointers between nodes can point both to the past and the future.

## Table of Contents

- [Introduction](#introduction)
- [Project Scenario](#project-scenario)
- [Node Structure](#node-structure)
- [Restrictions](#restrictions)
- [Code Overview](#code-overview)
  - [DoubleLinkedList Class](#doublelinkedlist-class)
  - [Node Structure](#node-structure)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Provide a brief introduction to the project, explaining its purpose and goals.

## Project Scenario

Describe the scenario in which the time travel simulation takes place. Include the following key events:

- Event A: The start of a scientific investigation on temporal energy.
- Observation of the Past (Pointer to A): A scientist travels to the past to observe Event A.
- Scientific Discovery (Photon B): The scientist makes a revolutionary discovery based on information obtained from Event A, leading to the creation of Event B.
- Exploration of the Future (Pointer to B): Another scientist uses a pointer to navigate to Event B and gain information about the revolutionary discovery.
- Changes in the Past (Pointer to A): Inspired by the information from Event B, the second scientist decides to travel to the past and compare their knowledge with the original scientist at Event A.

## Node Structure

Explain the structure of each node in the doubly linked list. Each node represents a temporal event and contains the following attributes:

- PtrPasado: A pointer to a past spacetime event.
- Event A: Represents an event that occurred in the past, triggered when the 'datos' variable contains a prime number. Indicates the start of Einstein's time travel research.
- Event B: Represents an event that occurred in the past, triggered when the 'datos' variable contains a prime number. Can only occur after Event A and signifies the creation of a time travel machine.
- Event C: Represents an event in the "future," triggered when the 'datos' variable is coprime with the 'datos' variable in Event A. Can only occur after Event B and indicates that Scientist 2 has traveled to the past and observed Events B and A.
- Scientist 1: Represents Scientist 1, with the value "Einstein" if the node corresponds to Event A.
- Scientist 2: Represents Scientist 2, with the value "Einstein" or "Rosen" based on specific conditions to avoid temporal paradoxes.

## Restrictions

Explain the restrictions imposed to prevent temporal paradoxes and ensure a consistent timeline:

- If the 'datos' variable of Event C is a non-prime integer but coprime with the 'datos' variable of Event A, it signifies a singularity that allows Scientist 2 to travel to the past only for observation.
- If the 'datos' variable of Event C is a prime number, it means that Scientist 2 not only traveled in time but also shared information with Scientist 1 to create the time travel machine.
- Only Einstein can share information with himself or receive information from Rosen. There cannot be a Rosen who shares information with himself.
- The doubly linked list must have a minimum size of 3 nodes and a maximum size of 22 nodes.
- The 'datos' variable of each node should be populated with a random integer between 1 and 100, and the 'cienfico' variable should be randomized between 1 and 2.

## Code Overview

Provide an overview of the code structure and main components.

### DoubleLinkedList Class

Explain the key functions and responsibilities of the `DoubleLinkedList` class:

- `add(int valor)`: Adds a new node to the doubly linked list with the given 'valor.'
- `random_add()`: Adds a node with a random 'valor' to the list.
- `display()`: Displays the entire list of events.
- `display_events()`: Displays events in the list, including Event A, Event B, and Event C.
- `check_scientist(int n)`: Checks and returns the scientist associated with an event based on specific conditions.
- `check_event(Scientist *s, int n1)`: Checks and returns the appropriate event based on the scientist and 'datos' values.

### Node Structure

Explain the structure and attributes of the `Node` structure within the `DoubleLinkedList` class.

## Usage

Provide examples and usage instructions for using the time travel simulation code. Include code snippets and explanations.

## Contributing

Explain how others can contribute to the project, submit issues, or propose improvements.

## License

Specify the project's license and include a link to the full license file.
