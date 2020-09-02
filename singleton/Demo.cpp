#include <iostream>

#include "./src/singleton.h"

int main(){
    singleton::getInstance()->method();
    singleton::delInstance();

    return 0;
}