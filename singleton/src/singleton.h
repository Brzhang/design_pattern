#pragma once

class singleton
{
public:
    static singleton* getInstance();
    static void delInstance();
    void method();
private:
    static singleton* m_instance;
    singleton();
    singleton(singleton& instance);
    singleton& operator=(const singleton& instance);
};