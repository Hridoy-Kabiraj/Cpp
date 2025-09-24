#include<iostream>
#include<cmath>
using namespace std;

void DoSomething(double u[], double A[][10],
                 double B[10][10]);

int main(int argc, char* argv[]){
    double u[5], A[10][10], B[10][10];
    DoSomething(u, A, B);

    // This will print the values allocated in
    // the function DoSomething
    cout<< u[2] << "\n";
    cout<< A[2][2] << "\n";
    cout<< B[3][3] << "\n";

    return 0;
}

void DoSomething(double u[], double A[][10], double B[10][10]){
    u[2] = 1.0;
    A[2][2] = 4.0;
    B[3][3] = -90.6;
}