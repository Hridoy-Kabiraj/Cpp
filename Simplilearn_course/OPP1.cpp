#include<iostream>
using namespace std;

class Animal{
    public:
    void speed(){
        cout<<"Who is more faster?"<<endl;
    }
};
class Dolphin: public Animal{
    public:
    void speed(){
        cout<<"I am faster in water"<<endl;
    }
};
class Cheeta: public Animal{
    public:
    void speed(){
        cout<<"I am faster on the ground"<<endl;
    }
};

int main(){
    Animal a;
    Cheeta c;
    Dolphin d;
    
    //Polymorphism
    a.speed();
    c.speed();
    d.speed();

    return 0;
}