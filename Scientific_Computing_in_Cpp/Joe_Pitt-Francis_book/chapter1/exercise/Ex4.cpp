#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char* argv[]){
    cout<<"Enter the number of row and columns for matrix A and B: \n";
    int r1, c1, r2, c2;
    cout<<"Row of A: ";
    cin>>r1;
    cout<<"Column of A: ";
    cin>>c1;
    cout<<"Row of B: ";
    cin>>r2;
    cout<<"Column of B: ";
    cin>>c2;

    if (c1 != r2){
        cout<<"Column of A must be equal to row of B.";
    }
    else {
        double A[r1][c1], B[r2][c2];

        cout<<"Enter the elements of matrix A(row wise): \n";
        for (int i = 0; i<r1; i++){
            for (int j = 0; j<c1; j++){
                cin>>A[i][j];
            }
        }

        cout<<"Enter the elements of matrix B(row wise): \n";
        for (int i = 0; i<r2; i++){
           for (int j = 0; j<c2; j++){
                cin>>B[i][j];
            }
        }

        cout<<"Your entered matrices are: \n";
        cout<<"A = \n";
        for (int i = 0; i<r1; i++){
            for (int j = 0; j<c1; j++){
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";

        cout<<"B = \n";
        for (int i = 0; i<r2; i++){
            for (int j = 0; j<c2; j++){
                cout<<B[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        

        if (r1 != r2 || c1 != c2){
            cout<<"Summation is only possible for same dimension matrices. \n";
        }
        else{
            cout<<"Sum of these two vectors is : \n";
            double sum[r1][c1];
            for (int i = 0; i<r1; i++){
                for(int j = 0; j<c1; j++){
                    sum[i][j] = A[i][j] + B[i][j];
                }
            }

            cout<<"Sum = \n";
            for (int i = 0; i<r2; i++){
                for (int j = 0; j<c2; j++){
                   cout<<sum[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }
        

        cout<<"Product of this two matrics is : \n";
        double product[r1][c2];
        double sum1 = 0;
        for (int i = 0; i<r1; i++){
            for(int j = 0; j<c2; j++){
                for (int k = 0; k<r1; k++){
                    sum1 += A[i][k] * B[k][j];
                } 
                product[i][j] = sum1;
                sum1 = 0;
            } 
        }

        cout<<"Product = \n";
        for (int i = 0; i<r1; i++){
            for (int j = 0; j<c2; j++){
                cout<<product[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        
    }
    return 0;
    
}