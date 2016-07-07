#include "Shelter.h"


Shelter::Shelter()
{
    limit = 50;
    status = EMPTY;
    animalCounter = 0;
    availablePlaces = limit - animalCounter;
}

Shelter::~Shelter()
{

}

void Shelter::addAnimal()
{
    animalCounter++;
    std::cout<<"addAnimal() method"<<std::endl;
    std::string xName;

    std::cin>>xName;

    animals.push_back(Animal(xName));
    std::cout<<animals[animalCounter-1].getName()<<" added"<<std::endl;
}

void Shelter::deleteAnimal()
{
    std::cout<<"deleteAnimal() method"<<std::endl;
}

void Shelter::showAllAnimals()
{
    std::cout<<"showAllAnimals() method"<<std::endl;
}

void Shelter::showStatus()
{
    std::cout<<"showStatus() method"<<std::endl;
}

/*GETTERS AND SETTERS*/
void Shelter::setLimit(int sLimit)
{
    limit = sLimit;
}

void Shelter::setName(std::string sName)
{
    name = sName;
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
    return animalCounter;
}
