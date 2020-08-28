#include "factoryA.h"
#include "classAa.h"
#include "classAb.h"

#include <stdio.h>

abstract_A* factory_A::getA(A_type type)
{
    switch(type)
    {
    case EAT_a:
        return new Aa();
    case EAT_b:
        return new Ab();
    }
    return NULL;
}

abstract_B* factory_A::getB(B_type type)
{
    return NULL;
}