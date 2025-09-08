#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char* argv[]){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    double A[n], B[n];
    cout<<"Enter the elements of vecotr A: \n";
    for (int i = 0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the elements of vector B: \n";
    for (int i = 0; i<n; i++){
        cin>>B[i];
    }
    
    cout<<"Your enterd vectors are: \n";
    cout<<"A = { ";
    for (int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<"}\n";

    cout<<"B = { ";
    for (int i = 0; i<n; i++){
        cout<<B[i]<<" ";
    }
    cout<<"}\n";

    double dot = 0;
    for (int i = 0; i<n; i++){
        dot += A[i]*B[i];
    }
    cout<<"The dot product is "<<dot<<"\n";
    
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i<n; i++){
        sum1 += pow(A[i], 2);
        sum2 += pow(B[i], 2);
    }
    cout<<"Norm of A: "<<sqrt(sum1)<<" and norm of B: "<<sqrt(sum2)<<"\n";

    return 0;

}