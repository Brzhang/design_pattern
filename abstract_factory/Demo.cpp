#include <iostream>

#include "./src/factoryA.h"
#include "./src/factoryB.h"

#include "./src/classAa.h"
#include "./src/classAb.h"
#include "./src/classBa.h"
#include "./src/classBb.h"

int main(){
    factory_A fa;
    factory_B fb;
    Aa* aa = (Aa*)fa.getA(EAT_a);
    Ab* ab = (Ab*)fa.getA(EAT_b);
    Ba* ba = (Ba*)fb.getB(EBT_a);
    Bb* bb = (Bb*)fb.getB(EBT_b);

    if(aa != NULL)
    {
        aa->method();
    }
    if(ab != NULL)
    {
        ab->method();
    }
    if(ba != NULL)
    {
        ba->method();
    }
    if(bb != NULL)
    {
        bb->method();
    }
    return 0;
}