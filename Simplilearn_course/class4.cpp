#include<iostream>
using namespace std;

class Gambit{
    public:
    Gambit(){
        cout<<"Hello there i am in  constructor"<<endl;
    }
    ~Gambit(){
        cout<<"Hello there I am in destructor"<<endl;
    }
    void display(){
        cout<<"HEllo"<<endl;
    }
};

int main(){
    Gambit gam;
    gam.display();


    return 0;
}