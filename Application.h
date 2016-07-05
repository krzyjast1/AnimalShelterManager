#pragma once

#include "Shelter.h"
#include "Animal.h"

#include <iostream>

class Application
{
    bool running;

public:
    Application();
    ~Application();

    void runApplication();
};
