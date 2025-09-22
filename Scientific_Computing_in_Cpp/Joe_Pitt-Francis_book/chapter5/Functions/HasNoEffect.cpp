#include<iostream>
using namespace std;

double HasNoEffect(double x);

int main(int argc, char* argv[]){
    double x = 2.0;
    HasNoEffect(x);
    cout<< x << "\n";  // will print out 2.0

    return 0;
}

double HasNoEffect(double x){
    // x takes the value 2.0 here 
    x += 1.0;
    // x takes the value 3.0 here

    return x;
}