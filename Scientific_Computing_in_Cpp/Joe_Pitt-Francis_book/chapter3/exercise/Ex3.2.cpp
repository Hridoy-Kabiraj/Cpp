#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;

int main(int argc, char* argv[]){
    ifstream read_file("x_and_y.dat");
    if (!read_file.is_open()){
        cerr<< "Warning: read_file is not working.";
    }
    int number_of_rows = 0;
    while(!read_file.eof()){
        
        number_of_rows++;
        double dummy1, dummy2;
        read_file >> dummy1 >> dummy2;
        if (read_file.fail()){
            cerr<<"Warning: the row "<<number_of_rows<<" is empty.\n";
            number_of_rows--;
        }  
    }
    
    read_file.close();
    cout<<"Nnumber of rows = "<< number_of_rows<<"\n";
    
    return 0;
}