#pragma once

#include "Observer.h"
#include <vector>

class Target
{
private:
    std:: vector<Observer*> m_observers;
public:
    Target();
    virtual ~Target();
    void addObserver(Observer* obj);
    void removeObserver(Observer* obj);
    void notifyAll();
};