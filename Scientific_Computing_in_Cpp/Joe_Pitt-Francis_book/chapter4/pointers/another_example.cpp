#include<iostream>

using namespace std;

int main(int argc, char* argv[]){
    double y;
    double* p_x;
    y = 3.0;
    cout<< "y = " << y << "\n";

    p_x = &y;
    *p_x = 1.0;
    cout<< "y = " << y << "\n";

    return 0;
}