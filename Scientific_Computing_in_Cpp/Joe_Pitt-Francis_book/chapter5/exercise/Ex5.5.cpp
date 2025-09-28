#include<iostream>
#include<cassert>
using namespace std;

void Multiply(double** A, double** B, int rows[2], int columns[2]);
void Delete_Allocation(double** A, double** B, int rows[2], int columns[2]);

int main(int argc, char* argv[]){
    int row1, row2;
    int col1, col2;
    double** A;
    double** B;
    
    
    // Taking row & column of A
    cout<<"Matrix A,\n";
    cout<<"row = ";
    cin>>row1;
    cout<<"column = ";
    cin>>col1;
    
    // Taking row & column of B
    cout<<"\nMatrix B,\n";
    cout<<"row = ";
    cin>>row2;
    cout<<"column = ";
    cin>>col2;

    assert(col1 == row2);

    // Allocating memory for A & B
    A = new double* [row1];
    for (int i = 0; i<row1; i++){
        A[i] = new double [col1];
    }
    B = new double* [row2];
    for (int i = 0; i<row2; i++){
        B[i] = new double [col2];
    }

    // Taking the elemnts of Matirx A & B
    cout<<"Enter the elements of A (row wise)\n";
    for (int i = 0; i<row1; i++){
        for(int j = 0; j<col1; j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of B (row wise)\n";
    for (int i = 0; i<row2; i++){
        for(int j = 0; j<col2; j++){
            cin>>B[i][j];
        }
    }

    // Multiplication
    int rows[2] = {row1, row2};
    int cols[2] = {col1, col2};
    Multiply(A, B, rows, cols);

    // Delete allocated memory
    Delete_Allocation(A, B, rows, cols);

    return 0;
}

// Function definition
void Multiply(double** A, double** B, int rows[2], int columns[2]){
    int row_A = rows[0];
    int row_B = rows[1];
    int col_A = columns[0];
    int col_B = columns[1];

    // C = A x B
    double C[row_A][col_B];  // row of C = row of A and column of C = column of B
    double sum;
    for (int i = 0; i<row_A; i++){
        for (int j = 0; j<col_B; j++){
            sum = 0;
            for (int k = 0; k<row_B; k++){
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // print C
    cout<<"Multiplication: \n";
    for (int i = 0; i<row_A; i++){
        for (int j = 0; j<col_B; j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

void Delete_Allocation(double** A, double** B, int rows[2], int columns[2]){
    int row_A = rows[0];
    int row_B = rows[1];

    for (int i = 0; i<row_A; i++){
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i<row_B; i++){
        delete[] B[i];
    }
    delete[] B;
}