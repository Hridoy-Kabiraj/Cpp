#include<iostream>
#include<cmath>
using namespace std;

void CalculateRealAndImaginary(double r, double theta,
                               double* p_real, double* p_imaginary);

int main(int argc, char* argv[]){
    double r;
    double theta;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"Enter the value of theta: ";
    cin>>theta;
    double x, y;  // x real part, y imaginary part
    CalculateRealAndImaginary(r, theta, &x, &y);  // After calling this function the x and y will be calculated.
    cout<<"\nReal part = "<<x<<"\n";
    cout<<"Imagiray part = "<<y<<"\n";

    return 0;
}

void CalculateRealAndImaginary(double r, double theta, double* p_real, double* p_imaginary){
    *p_real = r*cos(theta);
    *p_imaginary = r*sin(theta);
}