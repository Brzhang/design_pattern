#include <iostream>

#include "./src/factory.h"

#include "./src/classAa.h"
#include "./src/classAb.h"

int main(){
    factory fa;
    Aa* aa = (Aa*)fa.getA(EAT_a);
    Ab* ab = (Ab*)fa.getA(EAT_b);

    if(aa != NULL)
    {
        aa->method();
    }
    if(ab != NULL)
    {
        ab->method();
    }

    return 0;
}