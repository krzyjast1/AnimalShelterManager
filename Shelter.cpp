#include "Shelter.h"



Shelter::Shelter()
{
    limit = 50;
    status = EMPTY;
}

Shelter::~Shelter()
{

}

void Shelter::addAnimal()
{

}

void Shelter::deleteAnimal()
{

}

void Shelter::showAllAnimals()
{

}

/*GETTERS AND SETTERS*/
void Shelter::setLimit(int sLimit) :limit(sLimit)
{
}

void Shelter::setName(std::string sName) :name(sName)
{
}

int Shelter::getLimit()
{
    return limit;
}

std::string Shelter::getName()
{
    return name;
}

Shelter::Status Shelter::getStatus()
{
    return status;
}

int Shelter::getAvailablePlaces()
{
    return availablePlaces;
}

int Shelter::getAnimals()
{
    return animals;
}
