#include<iostream>
using namespace std;

void Pointer_Swap(double* x, double* y);  // swap funtion using pointer
void Reference_Swap(double& x, double& y);  // swap funtion using reference

int main(int argc, char* argv[]){
    // Swap using pointer
    double num1 = 5.0;
    double num2 = 10.0;

    double* p_num1;  // pointer to num1
    double* p_num2;  // pointer to num2

    p_num1 = &num1;
    p_num2 = &num2;
    Pointer_Swap(p_num1, p_num2);
    cout<<"After using swap with pointers,"<<"\n";
    cout<<"num1 = "<<num1<<"\n";
    cout<<"num2 = "<<num2<<"\n";
    
    cout<<"\n";

    // Swap using reference
    num1 = 5.0;  // Reseting
    num2 = 10.0;
    Reference_Swap(num1, num2);
    cout<<"Ater using swap with pointers,"<<"\n";
    cout<<"num1 = "<<num1<<"\n";
    cout<<"num2 = "<<num2<<"\n";

    return 0;

}

// Function definition 
void Pointer_Swap(double* x, double* y){
    double store;  // variable to store value
    store = *x;
    *x = *y;
    *y = store;
}

void Reference_Swap(double& x, double& y){
    double store;
    store = x;  // variable to store value
    x = y;
    y = store;
}