#include "target.h"

Target::Target()
{
}

Target::~Target()
{
}

void Target::addObserver(Observer* obj)
{
    if(obj == NULL)
    {
        return;
    }
    auto iter = m_observers.begin();
    while(iter != m_observers.end())
    {
        if(*iter == obj)
        {
            return;
        }
        ++iter;
    }
    m_observers.push_back(obj);
}

void Target::removeObserver(Observer* obj)
{
    if(obj == NULL)
    {
        return;
    }
    auto iter = m_observers.begin();
    while(iter != m_observers.end())
    {
        if(*iter == obj)
        {
            m_observers.erase(iter);
            return;
        }
        ++iter;
    }
}

void Target::notifyAll()
{
    auto iter = m_observers.begin();
    while(iter != m_observers.end())
    {
        (*iter)->onEvent();
        ++iter;
    }
}