#include<iostream>
#include<cmath>
using namespace std;

void CalculateCubeRoot(double& x, double k, 
    double toletrance = 1.0e-6,
    int maxIterations = 100);   // here, we set the default value for tolerance and maxIterations 

int main(int argc, char* argv[]){
    double x = 1.0;
    double K;
    cout<<"Enter the value of K = ";
    cin>>K;

    // Calculate cube root using the default values
    CalculateCubeRoot(x, K);
    cout<<"Root = "<<x<<"\n";

    // Calculate cube root using a tolerance of 0.001 and the 
    // default maximum number of iterations
    double tolerance = 0.001;
    x = 1.0;  // Restart guess
    CalculateCubeRoot(x, K, tolerance);
    cout<<"Root = "<< x<< "\n";

    // Calculate cibe root using a tolerance of 0.001 and a 
    // maximum number of iterations of 50
    int maxIteration = 50;
    x = 1.0;  // Restart guess
    CalculateCubeRoot(x, K, tolerance, maxIteration);
    cout<<"Root = "<<x<<"\n";

    return 0;
}

void CalculateCubeRoot(double& x, double K, double tolerance, int maxIteration){
    int iteration = 0;
    double residual = x*x*x - K;
    while((fabs(residual) > tolerance) && (iteration < maxIteration)){
        x = x - (x*x*x-K) / (3.0*x*x);
        residual = x*x*x - K;
        iteration++;
    }
}