#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(int argc, char*argv[]){
    double x_prev = 0;
    double epi = 1.0e-8;
    double x_next;
    while(true){
        x_next = x_prev - ((exp(x_prev) + pow(x_prev, 3) - 5)/(exp(x_prev) + 3*pow(x_prev, 2)));
        if(abs(x_next - x_prev) < epi){
            break;
        }
        x_prev = x_next;
    }
    cout<<fixed<<setprecision(10);
    cout<<"The root is "<<x_next<<"\n";
}