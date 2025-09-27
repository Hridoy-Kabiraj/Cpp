// we may wish to call a function from within the same function:
// this is known as recursion

#include<iostream>
#include<cassert>
using namespace std;

int CalculateFactorial(int n);

int main(int argc, char* argcv[]){
    int n;
    cout<<"Enter a positive integer number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<CalculateFactorial(n)<<"\n";

    return 0;
}

int CalculateFactorial(int n){
    assert(n > 0);
    if (n == 1){  // base case
        return 1;
    }
    else{
        // n > 1
        return n*CalculateFactorial(n-1); // return statement itself triggers another call
        // Each CalculateFactorial(n) pushes the next one CalculateFactorial(n-1), and so on,
        // until the last one (n=1) stands firm and doesn’t fall.
        // Then, all the results come back in reverse order.
    }
}