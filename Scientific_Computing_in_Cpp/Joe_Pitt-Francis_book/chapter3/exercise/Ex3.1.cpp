#include<iostream>
#include<fstream>
#include<cassert>
#include<vector>
using namespace std;

int main(int argc, char* argv[]){
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};
    cout<<"Do you want to keep the existing file?\n";
    cout<<"Press [y/n]: ";
    char c;
    cin>>c;
    ofstream write;
    if ( c == 'y'){
        write.open("x_and_y.dat", ios::app);
    }
    else if (c == 'n'){
        write.open("x_and_y.dat");
    }
    assert(write.is_open());
    write.precision(10);
    write.setf(ios::scientific);
    write.setf(ios::showpos);
    for (int i = 0; i<4; i++){
        write << x[i] << " " << y[i] << "\n";
    }
    write.flush();  // instant write all
    write.close();  // close write variable 

    ifstream read("x_and_y.dat");
    read.precision(10);
    read.setf(ios::showpos);
    read.setf(ios::scientific);
    assert(read.is_open());

    vector<double>a;
    vector<double>b;
    double p, q;
    while(!read.eof()){
        read >> p >> q;
        a.push_back(p);
        b.push_back(q);
    }
    read.close();
    while(read.is_open()){
        cerr<< "Warning: read is open!\n";
    }
    for (int i = 0; i<a.size(); i++){
        cout<< a[i]<<" "<<b[i]<<"\n";
    }

    return 0;
}