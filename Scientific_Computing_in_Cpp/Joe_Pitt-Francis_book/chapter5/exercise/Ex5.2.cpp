#include<iostream>
using namespace std;

// This function change the value of an integer by taking the address
void ChangeInteger(int* x);

int main(int argc, char* argv[]){
    int n = 5;
    // Printing the initial value of n
    cout<<"The initial value is "<<n<<"\n";

    int* p_n;             // pointer to an integer
    p_n = &n;             // p_n now stores the address of n
    ChangeInteger(p_n);   // passes the address of n to ChangeInteger
    
    // Now, the value of n is changed by ChangeInteger.
    // Printing the new value of n
    cout<< "The new value is "<<n<<"\n";

    return 0;
}

// Funtion definition
void ChangeInteger(int* x){
    *x = 10;  // Changing the value of integer
}