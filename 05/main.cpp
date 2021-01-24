#include<iostream>
#include<string>

using String = std::string;

class Entity{
private:
    String m_Name;
public:
    Entity() : m_Name("unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name;}
};
// void Function()
// {
//     int a = 2;
//     Entity
// }
int main(void){
   
} 