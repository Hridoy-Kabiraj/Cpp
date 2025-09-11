#include<iostream>
#include<cassert>
#include<fstream>
using namespace std;

int main(int argc, char* argv[]){
    double x[6] = {0.0, 1.0, 0.0, 0.0, 1.0, 0.0};
    double y[6] = {1.0, 0.0, 0.0, 1.0, 0.0, 0.0};
    
    // writing to file
    ofstream write_outpout("Output.dat"); // creates write_output variable to write in Output.dat file
    assert(write_outpout.is_open());   // checks if write_output is working or not
    
    for (int i = 0; i<6; i++){
        write_outpout<<x[i]<<" "<<y[i]<<"\n";
    }
    write_outpout.close();

    // reading from file
    double a[6], b[6];    // creating x, y array to store data from .dat file
    ifstream read_file("Output.dat");  // creates read_file variable to read from Output.dat file
    assert(read_file.is_open());  // checks if read_file is working or not
    for (int i = 0; i<6; i++){
        read_file>>a[i]>>b[i];
    }
    read_file.close();
    

    // printing the data after reading
    for (int i = 0; i<6; i++){
        cout<<a[i]<<" "<<b[i]<<"\n";
    }

    return 0;
}