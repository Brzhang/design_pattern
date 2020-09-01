#pragma once

enum A_type{
    EAT_a = 0,
    EAT_b,
};

class abstract_A;
class factory
{
public:
    abstract_A* getA(A_type type);
};