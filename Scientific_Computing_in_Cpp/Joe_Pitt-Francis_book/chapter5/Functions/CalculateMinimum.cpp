#include<iostream>
using namespace std;

double CalculateMinimum(double a, double b);

int main(int argc, char* argv[]){
     double x = 4.0, y = -8.0;
     double minimum_value = CalculateMinimum(x, y);
     cout<< "The minimum of "<< x << " and "<< y <<" is "<< minimum_value<< "\n";

     return 0;
}

double CalculateMinimum(double a, double b){
    double minimum;
    if(a<b){
        minimum = a;
    }
    else{
        // a >= b
        minimum = b;
    }
    return minimum;
}