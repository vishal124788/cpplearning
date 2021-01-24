#include<iostream>
#include<string>

class Entity{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
public:
    const std::string& Getname() const { 
        // means we cannot modify the content of variables //
        m_DebugCount++;
        return m_Name; 
    }
};

int main(void){
    const Entity e;
    e.Getname(); 
} 