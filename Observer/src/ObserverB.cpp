#include "ObserverB.h"
#include <iostream>

void ObserverB::onEvent()
{
    std::cout << " ObserverB onEvent called " << std::endl;
}