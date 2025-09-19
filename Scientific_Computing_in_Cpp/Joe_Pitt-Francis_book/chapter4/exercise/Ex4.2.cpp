#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int num1 = 4;
    int num2 = 9;
    cout<<"num1 = "<<num1<<"\n";
    cout<<"num2 = "<<num2<<"\n";

    int* p_swap1;
    int* p_swap2;
    int* p_store = new int;

    p_swap1 = &num1;
    *p_store = *p_swap1;
    *p_swap1 = num2;

    p_swap2 = &num2;
    *p_swap2 = *p_store;
    
    cout<<"\n";
    cout<<"After swaping:"<<"\n";
    cout<<"num1 = "<<num1<<"\n";
    cout<<"num2 = "<<num2<<"\n";

    delete p_store;  // it will delete both p_swap1 & p_swap2
    return 0;

}