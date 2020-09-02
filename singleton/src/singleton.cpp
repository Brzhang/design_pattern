#include "singleton.h"
#include <iostream>
#include <mutex>

std::mutex mtx;
singleton* singleton::m_instance = NULL;

/*static*/ singleton* singleton::getInstance()
{
    mtx.lock();
    if(m_instance == NULL)
    {
        m_instance = new singleton();
    }
    mtx.unlock();
    return m_instance;
}

/*static*/ void singleton::delInstance()
{
    mtx.lock();
    if (m_instance != NULL)
    {
        delete m_instance;
        m_instance = NULL;
    }
    mtx.unlock();
}

singleton::singleton()
{
}

singleton::singleton(singleton& instance)
{
}

singleton& singleton::operator = (const singleton& instance)
{
    if(this != &instance)
	{
		//will not happen;
	}
	return *this;
}

void singleton::method()
{
    std::cout << __FUNCTION__ << std::endl;
}
