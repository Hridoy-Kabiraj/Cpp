#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<cassert>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;
using namespace std;

int main(int argc, char* argv[]){
    ofstream write_file("xy.dat");
    double xmin = 0, xmax = 5; // x interval 0<=x<=5
    cout<<"Enter the number of grid points: ";
    int N;
    cin>>N;
    assert(N>1);
    
    double h; //step size
    h = (xmax - xmin) / (N - 1);
    double y_prev = 1;
    double y_next;
    vector<double> x;
    vector<double> y;
    
    for (int n = 0; n<N; n++){
        double x_n;
        x_n = n*h;
        y_next = y_prev / (1 + h);
        x.push_back(x_n);
        y.push_back(y_prev);
        write_file << x[n] << " " << y[n] <<"\n";
        y_prev = y_next;
    }
    write_file.close();
    
    // Calculate analytical solution
    vector<double> y_true;
    for (int i = 0; i< x.size(); i++){
        y_true.push_back(exp(-x[i]));
    }
    
    // Plot both solutions
    plt::figure();
    plt::plot(x, y, {{"label", "Euler Method"}, {"marker", "o"}, {"linestyle", "-"}, {"color", "blue"}});
    plt::plot(x, y_true, {{"label", "Analytical y=exp(-x)"}, {"linestyle", "-"}, {"color", "red"}});
    plt::xlabel("x");
    plt::ylabel("y");
    plt::title("Forward Euler Method vs Analytical Solution");
    plt::legend();
    plt::grid(true);
    plt::show();
    
    // Calculate and display error
    double max_error = 0;
    for (int i = 0; i < N; i++) {
        double error = abs(y[i] - y_true[i]);
        if (error > max_error) max_error = error;
    }
    cout << "Maximum error: " << max_error << endl;
    cout << "Step size h: " << h << endl;
    
    return 0;
}