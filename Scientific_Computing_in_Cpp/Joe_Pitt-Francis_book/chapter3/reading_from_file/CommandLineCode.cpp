#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    cout<<"Number of command line arguments = "
        << argc <<"\n";
    for (int i = 0; i < argc; i++){
        cout<<"Argument "<< i << " = " << argv[i];
        cout<<"\n";
    }

    string program_name = argv[0];
    int number_of_nodes = atoi(argv[1]);
    double conductivity = atof(argv[2]);
    cout<< "Program name = "<< program_name << "\n";
    cout<< "Number of nodes = " << number_of_nodes;
    cout<<"\n";
    cout<< "Conductivity = " << conductivity << "\n";

    return 0;
}