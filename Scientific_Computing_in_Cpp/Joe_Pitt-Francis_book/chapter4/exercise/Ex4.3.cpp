#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double* A;
    double* B;
    
    // Dynamicallay allocating memory
    A = new double [3];  // Creating a 1D vector of double precision
    B = new double [3];
    

    // Assaigning values to the vectors
    for (int i = 0; i<3; i++){
        A[i] = i+1;
        B[i] = i+2;
    }

    // Dot product
    double dot = 0;
    for (int i = 0; i<3; i++){
        dot += A[i]*B[i];
    }
    cout<<"Dot product = "<<dot<<"\n";
    delete[] A;
    delete[] B;

    
    for (int i = 0; i<=1000000000; i++){
        
        double* A;
        double* B;
        
        // Allocating memmory
        A = new double [3];
        B = new double [3];

        // Assaigning value to the vector at the begining of each iteration
        for (int j = 0; j<3; j++){
            A[j] = j+2;
            B[j] = j+3;
        }

        // Calulating Dot product 
        dot = 0;
        for (int k = 0; k<3; k++){
            dot += A[k]*B[k];
        }
        
        // Printing Dot products after some certain iterations to check if it is right
        if (i % 100000000 == 0){
            cout<<"Iteration "<<i<<": Dot product = "<<dot<<"\n";
        }

        // Deleting the assaigned value to A and B
        delete[] A;
        delete[] B;
    }
    cout<<"1,000,000,000 iterations complete."<<"\n";

    return 0;
}