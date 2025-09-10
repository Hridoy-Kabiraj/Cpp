#include<iostream>
#include<cassert>
using namespace std;

int main(int argc, char* argv[]){
    cout<<"Enter a 2x2 matrix(row wise): \n";
    double A[2][2];
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cin>>A[i][j];
        }
    }
    cout<<"Your given matrix is: \n";
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    double det_A = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    cout<<"Determinant = "<<det_A<<"\n";
    assert(det_A != 0);  // checking if det a is zero
    
    double coeff_A[2][2];  // coefficient matrix
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            if (i != j){
                coeff_A[i][j] = -A[i][j];
            }
            else{
                coeff_A[i][j] = A[1-i][1-j];
            }
            
        }
    }

    
    
    cout<<"Invese matrix is : \n";
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cout<<(1/det_A)*coeff_A[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;

}