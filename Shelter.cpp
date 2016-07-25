#include "Shelter.h"


Shelter::Shelter()
{
    limit = 2;
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

    if(status == FULL)
    {
        std::cout<<"Shelter cannot be overflowed"<<std::endl;
        return;
    }

    animals.push_back(Animal(xName));
    std::cout<<animals[animalCounter-1].getName()<<" added"<<std::endl;

    update();

    std::cout<<availablePlaces<<" available places."<<std::endl;
}

void Shelter::deleteAnimal()
{
    std::cout<<"deleteAnimal() method"<<std::endl;

    std::string xName;

    std::cin>>xName;

    for(int i=0; i<animalCounter; i++)
    {
        if(animals[i].getName() == xName)
        {
            animals.erase(animals.begin()+i);
            animalCounter--;
        }
    }

    update();
}

void Shelter::showAllAnimals()
{
    std::cout<<"showAllAnimals() method"<<std::endl;

    if(status == EMPTY) return;

    for(int i=0; i<animalCounter; i++)
    {
        std::cout<<i+1<<". "<<animals[i].getName()<<std::endl;
    }

}

void Shelter::showStatus()
{
    std::cout<<"showStatus() method"<<std::endl;

    switch(status)
    {
        case FULL: std::cout<<"Shelter is full"<<std::endl; break;
        case AVAILABLE_PLACES: std::cout<<"There are available places in shelter"<<std::endl; break;
        case EMPTY: std::cout<<"Shelter is empty"<<std::endl; break;
        case OVERFLOWED: std::cout<<"Shelter is overflowed"<<std::endl; break;
    }
}

void Shelter::update()
{
    std::cout<<"update() method"<<std::endl;

    availablePlaces = limit - animalCounter;

    if(availablePlaces == 0) status = FULL;
    else if(availablePlaces > 0 && availablePlaces < limit) status = AVAILABLE_PLACES;
    else if(availablePlaces == limit) status = EMPTY;
    else if(availablePlaces < 0) status = OVERFLOWED;
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
