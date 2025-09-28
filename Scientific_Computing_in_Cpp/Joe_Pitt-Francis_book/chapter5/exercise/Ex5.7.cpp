#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

double Norm(vector<double>v, int size, int p);
// Input arguments:
// 1. vector, 2. Size of the vector, 3. p-norm

int main(int argc, char*argv[]){
    int size;
    cout<<"Enter the size of the vector = ";
    cin>>size;

    vector<double>v;
    cout<<"Enter the elements of the vector :\n";
    double x;
    for (int i = 0; i<size; i++){
        cin>>x;
        v.push_back(x);
    }
    
    int p;
    cout<<"Enetr the value of p = ";
    cin>>p;

    // Calculate p-norm
    double p_norm = Norm(v, size, p);
    cout<<p<<"-norm of the vector = "<< p_norm<<"\n";

    return 0;
}

// Function definition
double Norm(vector<double>v, int size, int p){
    double sum = 0;
    for (int i = 0; i<size; i++){
        sum += pow(v[i], p);
    }

    double p_norm;
    p_norm = pow(sum, 1.0/p);

    return p_norm;
}