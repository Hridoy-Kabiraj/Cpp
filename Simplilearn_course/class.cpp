#include<iostream>
using namespace std;

class Frenchise{
    public:
    void KFG(){
        cout<<"We have the best chicken"<<endl;
    }
    void BurgerKing(){
        cout<<"We have best burgers"<<endl;
    }
};

int main(){
    Frenchise fran;
    fran.KFG();
    fran.BurgerKing();

    return 0;
}