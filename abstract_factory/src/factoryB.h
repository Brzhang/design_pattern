#pragma once
#include "abstractFactory.h"

class factory_B : public abstract_factory
{
public:
    abstract_A* getA(A_type type);
    abstract_B* getB(B_type type);
};