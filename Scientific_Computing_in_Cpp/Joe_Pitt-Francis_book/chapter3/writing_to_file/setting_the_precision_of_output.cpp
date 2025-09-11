#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char* argv[]){
    double x = 1.8364238;
    ofstream write_output("Precision.dat", ios::app);

    write_output.precision(3); // 3 sig figs
    write_output<<x<<"\n";

    write_output.precision(5);  // 5 sig figs
    write_output<<x<<"\n";

    write_output.precision(10);  // 10 sig figs // this prints 8 digits as x has max 8 digits
    write_output<<x<<"\n";

    write_output.close();

    return 0;
}