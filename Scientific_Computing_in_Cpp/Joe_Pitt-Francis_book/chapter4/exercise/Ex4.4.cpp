#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double** A;
    double** B;
    double** C;

    int rows = 2;
    int cols = 2;
    
    // Creating matrices
    A = new double* [rows];
    B = new double* [rows];
    C = new double* [rows];
    for (int i = 0; i<rows; i++){
        A[i] = new double [cols];
        B[i] = new double [cols];
        C[i] = new double [cols];
    }

    // Assaigning value to A & B
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            A[i][j] = j+1;
            B[i][j] = j+2;

            // Calculating C = A + B
            C[i][j] = A[i][j] +  B[i][j];
        }
    }

    // Printing C
    cout<<"C = \n";
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //De-allocating the memory
    for (int i = 0; i<rows; i++){
        // Deleting columns
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    // Deleting rows
    delete[] A;
    delete[] B;
    delete[] C;
    

    // Testing the de-allocation of memory
    for (int i = 0; i<=1000000000; i++){
        
        double** A;
        double** B;
        double** C;

        //Allocating memory
        A = new double* [rows];
        B = new double* [rows];
        C = new double* [rows];
        for (int j = 0; j<rows; j++){
            A[j] = new double [cols];
            B[j] = new double [cols];
            C[j] = new double [cols];
        }

        // Assaigning values to A, B & C at the begining of each iteration
        for (int j = 0; j<rows; j++){
            for (int k = 0; k<cols; k++){
                A[j][k] = k+1;
                B[j][k] = k+2;

                // Calculating C = A + B
                C[j][k] = A[j][k] + B[j][k];
            }
        }

        // Printing C after certain iterations
        if (i % 100000000 == 0){
            cout<<"Iteration "<<i<<": C = \n";
            for (int j = 0; j<rows; j++){
                for (int k = 0; k< cols; k++){
                    cout<<C[j][k]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

        // De-allocating the memory
        for (int j = 0; j<rows; j++){
            delete[] A[j];
            delete[] B[j];
            delete[] C[j];
        }
        delete[] A;
        delete[] B;
        delete[] C;
    }

    return 0;

}