#include<iostream>
using namespace std;

// This funtions prints the value of integer by taking the address 
void PrintValue(int *x);

int main(int argc, char* argv[]){
    int n = 5;       
    int* p_n;         // pointer to integer
    p_n = &n;         // p_n now stores the address of n
    PrintValue(p_n);  // pass the pointer (address of n) to the function


    return 0;
}

// Defining the previously declared PrintValue function
void PrintValue(int *x){
    cout<<"The value ot the Integer is "<<*x<<"\n";
}