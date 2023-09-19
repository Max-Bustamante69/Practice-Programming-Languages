cmake_minimum_required(VERSION 3.26)
project(Lenguajes_de_Programacion)

set(CMAKE_CXX_STANDARD 17)


add_executable(Lenguajes_de_Programacion main.cpp
        DoubleLinkedLists/DoubleLinkedList.cpp
        DoubleLinkedLists/DoubleLinkedList.h
        Scientist/Scientist.h
        Scientist/Scientist1.h
        Scientist/Scientist2.h
        Events/Event.h
        Events/eventA.h
        Events/eventB.h
        Events/eventC.cpp
        Events/eventC.h
)
