#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int rows = 5, cols = 3;
    double** A;  // A is a pointer(row pointer) of a pointer(column pointer)
    A = new double* [rows]; // A is 1D vector with number of elements = rows
    for (int i = 0; i<rows; i++){
        A[i] = new double [cols];  // each row will have now number of elements = cols
    }
    

    // now we can use A as a 5x3 matrix
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            A[i][j] = j;
        }
    }

    for (int i = 0; i<rows; i++){
        for (int j = 0; j<cols; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    //deleting the allocated memeory for A
    for (int i = 0; i<rows; i++){
        delete[] A[i];  // deletes the allocated memory for columns
    }
    delete[] A;  // delete the allocated memory for rows

    return 0;

}