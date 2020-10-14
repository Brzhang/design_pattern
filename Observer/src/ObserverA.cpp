#include "ObserverA.h"
#include <iostream>

void ObserverA::onEvent()
{
    std::cout << " ObserverA onEvent called " << std::endl;
}