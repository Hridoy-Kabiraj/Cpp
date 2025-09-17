#include<iostream>

using namespace std;

int main(int argc, char* argv[]){
    double y, z;  //y, z store double precision numbers
    double* p_x;  // p_x stores the address of a double

    z = 3.0;
    p_x = &z;  // p_x stores the adderss of z
    y = *p_x + 1.0;  // *p_x is the content of the memeory
                     // p_x, i.e. the value of z
    
    cout<< y <<"\n";

    return 0;
}