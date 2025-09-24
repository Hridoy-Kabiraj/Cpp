#include<iostream>
using namespace std;

double CalculateScalarProduct(int size, double* a, double* b);

int main(int argc, char* argv[]){
    int n;
    cout<<"Enter the size of the vectors: ";
    cin>>n;
    double* x = new double [n];
    double* y = new double [n];
    // Taking the elements of the vectors 
    cout<<"Enter the elements of the first vector: \n";
    for (int i = 0; i<n; i++){
        cin>>x[i];
    }
    cout<<"Enter the elements of the second vector: \n";
    for (int i = 0; i<n; i++){
        cin>>y[i];
    }
    cout<<"\n";
    
    // pass the n, x, y to CalculateScalarProduct to calculate scalar product
    double scalar_product = CalculateScalarProduct(n, x, y);
    cout<<"Scalar product = "<<scalar_product<<"\n";

    delete[] x;
    delete[] y;

    return 0;
}

double CalculateScalarProduct(int size, double* a, double* b){
    double scalar_product = 0.0;
    for (int i = 0; i<size; i++){
        scalar_product += a[i]*b[i];
    }
    return scalar_product;
}