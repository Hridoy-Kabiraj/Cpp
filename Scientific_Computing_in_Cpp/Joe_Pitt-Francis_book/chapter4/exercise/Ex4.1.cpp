#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int i = 5;  // interger variable i, with the value 5
    int* p_j;   // An integer pointer variable
    p_j = &i;   // Storing the address of i in p_j
    cout<<"p_j = "<<*p_j<<"\n";
    *p_j *= 5;  // multiply the content of p_j by 5
    cout<<"p_j = "<<*p_j<<"\n";
    cout<<"i = "<<i<<"\n";  // both i & p_j has same value
    int* p_k = new int;  // declaring a new integer pointer and allocating a new location
    *p_k = *p_j;  //assaigning the content of p_j into p_k
    cout<<"p_k = "<<*p_k<<"\n";
    *p_j = 0;     // changeing the content of p_j to 0
    cout<<"p_j = "<<*p_j<<"\n";
    cout<<"i = "<<i<<"\n";  // changing *p_j will change the i because p_j directly point to i
    cout<<"p_k = "<<*p_k<<"\n";  // changing *p_j won't change *p_k beacuse p_k does not point to p_j directly
    *p_k = 5;
    cout<<"p_k = "<<*p_k<<"\n";
    cout<<"p_j = "<<*p_j<<"\n"; // p_k does not point to p_j
    cout<<"i = "<<i<<"\n";  //p_k does not point to i

    delete p_k;  // p_k contains some value
    return 0;
}