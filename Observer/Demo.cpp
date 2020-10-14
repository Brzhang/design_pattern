#include <iostream>

#include "./src/target.h"

#include "./src/ObserverA.h"
#include "./src/ObserverB.h"

int main()
{
    ObserverA obA;
    ObserverB obB;

    Target target;
    target.addObserver(&obA);
    target.addObserver(&obB);

    target.notifyAll();

    target.removeObserver(&obA);
    target.removeObserver(&obB);

    target.notifyAll();
    return 0;
}