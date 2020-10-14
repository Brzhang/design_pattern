#pragma once

#include "Observer.h"

class ObserverA : public Observer
{
public:
    virtual void onEvent() override;
};