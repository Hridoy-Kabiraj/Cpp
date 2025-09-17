#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int** A;
    A = new int* [10]; //allocating 1000 rows for A. each row is a pointer for column
    for (int i = 0; i<10; i++){
        A[i] = new int[i+1]; //allocating columns into each row, here we are dynamically allocating the columns, like in the first row we are allocating 1 column and in the 2nd row we are allocating 2 coulmns and goes on
    }

    // assaign value to the matrix
    for (int i = 0; i<10; i++){
        for (int j = 0; j<i+1; j++){
            A[i][j] = j+1;
        }
    }

    //printing the matrix
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            if (j < 10 - (i+1)){
                cout<<"  ";
            }
            else{
                cout<<A[i][9-j]<<" ";
            }
        }
        cout<<"\n";
    }

    // deleting the allocated memory
    for (int i = 0; i<10; i++){
        delete[] A[i];  /// deleting columns memory
    }
    delete[] A;  // deleting rows memory

    return 0;
}