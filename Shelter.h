#pragma once

#include "Animal.h"

#include <iostream>
#include <vector>

class Shelter
{
private:
    int limit; //LIMIT OF ANIMALS IN SHELTER
    std::string name; //NAME OF SHELTER
    enum Status {EMPTY, FULL, OVERFLOWED, AVAILABLE_PLACES};
    int availablePlaces;
    int animalCounter;

    std::vector <Animal> animals;

    Status status;

public:
    Shelter();
    ~Shelter();

    void addAnimal();
    void deleteAnimal();
    void showAllAnimals();
    void showStatus();

    void update();

    /*GETTERS AND SETTERS*/
    void setLimit(int);
    void setName(std::string);

    int getLimit();
    std::string getName();
    Status getStatus();
    int getAvailablePlaces();
    int getAnimals();

};
