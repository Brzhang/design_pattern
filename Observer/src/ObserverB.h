#pragma once

#include "Observer.h"

class ObserverB : public Observer
{
public:
    virtual void onEvent() override;
};