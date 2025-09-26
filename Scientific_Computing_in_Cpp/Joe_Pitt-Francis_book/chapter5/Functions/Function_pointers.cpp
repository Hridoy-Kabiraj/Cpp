#include<iostream>
using namespace std;

double myFunction(double x);
double myOtherFuntion(double x);

int main(int argc, char* argv[]){
    // double → the return type of the function (it returns a double).
    // (*p_function) → says that p_function is a pointer to a function.
    // (double x) → the function takes a double argument.
    double (*p_function) (double x);

    p_function = &myFunction;  // points the address of myFnction
    cout<<p_function(2.0)<<"\n";  // Like the function the function pointer can also take arguments

    p_function = &myOtherFuntion;  // now, it's pointing to myOtherFuntion
    cout<<p_function(2.0)<<"\n";

    return 0;
}

double myFunction(double x){
    return x*x;
}

double myOtherFuntion(double x){
    return x*x*x;
}