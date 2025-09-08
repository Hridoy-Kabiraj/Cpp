#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;

int main(int argc, char* argv[]){

    double a ;
    cout<<"Enter a non-negetive number: ";
    cin>>a;
    assert(a >= 0.0);
    cout<<"The square root of "<<a<<" is "<<sqrt(a)<<endl; 

    return 0;
}
