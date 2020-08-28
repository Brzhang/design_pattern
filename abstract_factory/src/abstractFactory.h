#pragma once

enum A_type{
    EAT_a = 0,
    EAT_b,
};
enum B_type{
    EBT_a = 0,
    EBT_b,
};
class abstract_A;
class abstract_B;
class abstract_factory
{
public:
    virtual abstract_A* getA(A_type type) = 0;
    virtual abstract_B* getB(B_type type) = 0;
};