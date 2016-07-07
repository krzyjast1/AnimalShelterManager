#pragma once

#include <iostream>

class Animal
{
    std::string name;

public:
    Animal(std::string);
    ~Animal() {};

    /*GETTERS AND SETTERS*/
    std::string getName();
};
