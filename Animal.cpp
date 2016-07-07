#include "Animal.h"

Animal::Animal(std::string sName) :name(sName)
{
}

std::string Animal::getName()
{
    return name;
}
