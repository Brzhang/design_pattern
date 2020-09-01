#include "factory.h"
#include "classAa.h"
#include "classAb.h"

#include <stdio.h>

abstract_A* factory::getA(A_type type)
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
