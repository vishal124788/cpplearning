#include<iostream>
#include<string>
//Virtual Functions 
class Entity {
public:
   virtual std::string GetName() { return "Entity";}
};

class Player : public Entity{
private : 
    std::string m_Name;
public : 
    Player(const std::string& name)
            :m_Name(name){}
    std::string GetName() override { return m_Name;}
};
void PrintName(Entity* entity){
    std::cout << entity -> GetName() << std::endl;
}
int main(void){
    
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("vishal");
    std::cout<<p->GetName() << std::endl;

}