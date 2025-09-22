#include<iostream>
using namespace std;

double** AllocateMatrixMemory(int numRows, int numCols);
void FreeMatrixMemory(int numRows, double** matrix);

int main(int argc, char* argv[]){
    double** A;  // allocating a pointer of a pointer
    A = AllocateMatrixMemory(5, 3);
    A[0][1] = 2.0;
    A[4][2] = 4.0;

    // print matrix
    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    FreeMatrixMemory(5, A);
    return 0;
}

// Function to allocate memory for a matrix dynamically
double** AllocateMatrixMemory(int numRows, int numCols){
    double** matrix;
    matrix = new double* [numRows];
    for (int i = 0; i<numRows; i++){
        matrix[i] = new double [numCols];
    }
    return matrix;
}

//Function to free memory of a matrix
void FreeMatrixMemory(int numRows, double** matrix){
    for (int i = 0; i<numRows; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}