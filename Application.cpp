#include  "Application.h"
#include <iostream>
#include <cstdlib>

Application::Application()
: running(true)
{

}

Application::~Application()
{

}

void Application::runApplication()
{
    std::string command;

    while(running)
    {
        getline(std::cin, command);

        if(command == "exit") running = false;


    }
}
