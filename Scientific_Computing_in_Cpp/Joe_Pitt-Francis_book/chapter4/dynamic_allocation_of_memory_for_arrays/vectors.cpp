#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double* x;
    double* y;
    x = new double [10];  // create a one-dimensional array of double precision 
                          // floating point numbers of length 10
    
    y = new double [10];
    for (int i = 0; i<10; i++){
        x[i] = ((double)(i));
        y[i] = 2.0 * x[i];
    }
    delete[] x;  // delete the allocated memory for x
    delete[] y;  // delete the allocated memory for y

    return 0;
}