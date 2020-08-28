#pragma once

#include "abstractFactory.h"

class factory_A : public abstract_factory
{
public:
    abstract_A* getA(A_type type);
    abstract_B* getB(B_type type);
};