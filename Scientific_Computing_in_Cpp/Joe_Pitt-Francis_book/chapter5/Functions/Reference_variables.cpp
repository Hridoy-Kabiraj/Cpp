#include<iostream>
#include<cmath>
using namespace std;

void CalculateRealAndImaginary(double r, double theta, double& real, double& imaginary);
// Here, we define reference variable using '&' after double
// It is actually the case that references behave like pointers behind the scenes, but
// without the programmer having to convert to an address with & on the function
// call and without having to de-reference inside the function

int main(int argc, char* argv[]){
    double r = 3.4;
    double theta = 1.23;
    double x, y;
    CalculateRealAndImaginary(r, theta, x, y);  // here we are passing the variables directly
    cout<<"Real part = "<< x <<"\n";
    cout<<"Imaginary part = "<< y <<"\n";
    
    return 0;
}

// Here, the passed variables will be treated as variable address
void CalculateRealAndImaginary(double r, double theta, double& real, double& imaginary){
    real = r*cos(theta);
    imaginary = r*sin(theta);
}