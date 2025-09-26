// If we define functions of the same name more than one times but with different input variables,
// then it is called function overloading.
// The complier will auto detect the correct function based on the input arguments

#include<iostream>
using namespace std;

void Multiply(double scalar, double* u, double* v, int n);
void Multiply(double scalar, double** A, double** B, int n);

int main(int argc, char* argv[]){
    int n = 2;
    double* u = new double [n];  // vector with n elements
    double* v = new double [n];
    double** A = new double* [n];  // pointer vector of n pointers (Matrix)
    double** B = new double* [n];  
    for (int i = 0; i<n; i++){
        A[i] = new double [n];   // Defining columns in row
        B[i] = new double [n];
    }

    u[0] = -8.7; u[1] = 3.2;
    A[0][0] = 2.3; A[0][1] = -7.6;
    A[1][0] = 1.3; A[1][1] = 45.3;

    double s = 2.3, t = 4.8;

    // vector multiplication
    Multiply(s, u, v, n);
    cout<<"v = ";
    for (int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    // matirx multiplication
    Multiply(t, A, B, n); // we can also pass 's'
    cout<<"B = \n";
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout<<B[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    delete[] u;
    delete[] v;
    for (int i = 0; i<n; i++){
        delete[] A[i];
        delete[] B[i];
    }
    delete[] A;
    delete[] B;

    return 0;
}

void Multiply(double scalar, double* u, double* v, int n){
    // v = scalar * u 
    for (int i = 0; i<n; i++){
        v[i] = scalar * u[i];
    }
}

void Multiply(double scalar, double** A, double** B, int n){
    // B = scalar * A
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            B[i][j] = scalar * A[i][j];
        }
    }
}