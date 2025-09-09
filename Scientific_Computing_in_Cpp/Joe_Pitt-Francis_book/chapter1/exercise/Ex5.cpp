#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    string name = " ";
    cout<<"Enter your first name: ";
    getline(cin, name);
    string fname = " ";
    cout<<"Enter your family name: ";
    getline(cin, fname);
    cout<<"Your full name is "<<name<<" "<<fname<<".\n";

    return 0;
}