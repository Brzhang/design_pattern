#include "factoryB.h"
#include "classBa.h"
#include "classBb.h"

#include <stdio.h>

abstract_A* factory_B::getA(A_type type)
{
    return NULL;
}

abstract_B* factory_B::getB(B_type type)
{
    switch(type)
    {
    case EBT_a:
        return new Ba();
    case EBT_b:
        return new Bb();
    }
    return NULL;
}

