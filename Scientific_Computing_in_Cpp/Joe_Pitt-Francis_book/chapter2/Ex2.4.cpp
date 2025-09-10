#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double u[3] = {1, 2, 3};
    double v[3] = {6, 5, 4};
    double A[3][3] = {{1, 5, 0},
                      {7, 1, 2},
                      {0, 0, 1}};
    
    double B[3][3] = {{-2, 0, 1},
                      {1, 0, 0},
                      {4, 1, 0}};
    
    double w[3];
    for (int i = 0; i<3; i++){
        w[i] = u[i] - 3*v[i];
    }
    cout<<"w = \n";
    for (int i = 0; i<3; i++){
        cout<<w[i]<<"\n";
    }
    cout<<"\n";

    double x[3];
    for (int i = 0; i<3; i++){
        x[i] = u[i] - v[i];
    }
    cout<<"x = \n";
    for (int i = 0; i<3; i++){
        cout<<x[i]<<"\n";
    }
    cout<<"\n";

    double y[3][1];
    for (int i = 0; i<3; i++){
        double sum = 0;
        for (int j = 0; j<3; j++){
            sum += A[i][j] * u[j];
        }
        y[i][1] = sum;
    }
    cout<<"y = \n";
    for (int i = 0; i<3; i++){
        cout<<y[i][1]<<"\n";
    }
    cout<<"\n";

    double z[3][1];
    for (int i = 0; i<3; i++){
        double sum = 0;
        for (int j = 0; j<3; j++){
            sum += A[i][j] * u[j];
        }
        z[i][1] = sum - v[i];
    }
    cout<<"z = \n";
    for (int i = 0; i<3; i++){
        cout<<z[i][1]<<"\n";
    }
    cout<<"\n";

    double C[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            C[i][j] = 4*A[i][j] - 3*B[i][j];
        }
    }
    cout<<"C = \n";
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    double D[3][3];
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            double sum = 0;
            for (int k = 0; k<3; k++){
                sum += A[i][k] * B[k][j];
            }
            D[i][j] = sum;
        }
    }
    cout<<"D = \n";
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cout<<D[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}