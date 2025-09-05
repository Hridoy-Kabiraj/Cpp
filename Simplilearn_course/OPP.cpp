#include<iostream>
using namespace std;

class Parent{
    public:
    string name1 = "Herley";
};

class Child: public Parent{
    public:
    string name2 = "Devidson";
};

int main(){
    Child ch;
    cout<< ch.name1 + " " + ch.name2;
    return 0;
}