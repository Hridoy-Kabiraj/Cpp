#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double p, q, x, y;
    int j;

    cout<<"Enter the value of p: ";
    cin>>p;
    cout<<"q: ";
    cin>>q;
    cout<<"y: ";
    cin>>y;
    cout<<"j: ";
    cin>>j;
    
    cout<<"Value according to condition 1,\n";
    if ((p >= q) || (j != 10)){
        x = 5;
        cout<<"The value of x is "<<x<<endl;
    }
    cout<<"\n";
    
    cout<<"Value according to condition 2,\n";
    if ((y >= q) && (j == 20)){
        x = 5;
        cout<<"The value of x is "<<x<<endl;
    }
    else {
        x = p;
        cout<<"The value of x is "<<x<<endl;
    }
    cout<<"\n";

    cout<<"Value according to condition 3,\n";
    if (p>q){
        x = 0;
        cout<<"The value of x is "<<x<<endl;
    }
    else if ((p <= q) && (j == 10)){
        x = 1;
        cout<<"The value of x is "<<x<<endl;
    }
    else {
        x = 2;
        cout<<"The value of x is "<<x<<endl;
    }

    return 0;

}