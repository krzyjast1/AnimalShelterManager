#pragma once

#include <iostream>

class Shelter
{
private:
    int limit = 50; //LIMIT OF ANIMALS IN SHELTER
    const int ArSize = 32; //LETTERS LIMIT IN NAME
    char[ArSize] name; //NAME OF SHELTER
    enum Status{EMPTY, FULL, OVERFLOWED, AVAILABLE_PLACES};
    int availablePlaces;
    int animals;

///TODO: MAKE LIST OF ANIMALS

protected:
    Status status;

public:
    Shelter();
    ~Shelter();

    void addAnimal();
    void deleteAnimal();
    void showAllAnimals();

    /*GETTERS AND SETTERS*/
    void setLimit(int);
    void setName(int);
    void getLimit();
    void getName();
    void getStatus();
    void getAvailablePlaces();

};
