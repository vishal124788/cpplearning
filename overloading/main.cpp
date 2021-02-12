#include<iostream>
#include<string>

struct Vector2{
    float x,y;
    Vector2(float x , float y)
        :x(x),y(y){}
    
    Vector2 Add(const Vector2& other) const{
        return Vector2(x+other.x , y+other.y);
    }
    Vector2 Multiply(const Vector2& other) const{
        return Vector2(x*other.x , y*other.y);
    }

    Vector2 operator+(const Vector2& other) const{
       return Add(other);
    }
    Vector2 operator*(const Vector2& other) const{
       return Multiply(other); 
    }
};

std::ostream& operator<<(std::ostream& stream,const Vector2& other){
    stream << other.x<<","<<other.y <<std::endl;
    return stream ;
}

int main(void){
    Vector2 position(4.0f,4.0f);  
    Vector2 speed(0.5f,0.5f);
    Vector2 Powerup(1.1f ,1.1f);
    // Results //  
    Vector2 result1 = position.Add(speed.Multiply(Powerup));
    Vector2 result2 = position + speed * Powerup ;

    std::cout<<result2 <<std::endl;
}  