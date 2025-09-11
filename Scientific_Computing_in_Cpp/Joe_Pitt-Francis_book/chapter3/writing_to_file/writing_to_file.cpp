#include<iostream>
#include<cassert>
#include<fstream>
using namespace std;

int main(int argc, char* argv[]){
    double x[3] = {0.0, 1.0, 0.0};
    double y[3] = {0.0, 0.0, 1.0};
    
    ofstream write_output("Output.dat", ios::app); //write_output is a output stream variable which writes the output to "Output.dat". It will create a new "Output.dat" file if it doesn't exist. 
    // by using ios::app, when we execute the C++ executable file, it does not delete the previously existed Outout.dat file. It add the new data to the Output.dat file.  
    assert(write_output.is_open());   // checks if write_output works or not. Returns true or false;
    
    write_output<<"\nAfter using ios::app\n";
    write_output<<"x"<<" "<<"y"<<"\n";
    for (int i = 0; i<3; i++){
        write_output<<x[i]<<" "<<y[i]<<"\n";  // write_output will write x and y in the Output.dat file
    }
    write_output.close();  // we close the variable sothat after this no data will be written to this file to prevent corruption
    // write_output.flush();  // we can also flush the variable sothat all the data should be written to the file immediately without closing the file handel. 
    
    return 0;
}