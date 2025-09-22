#include<iostream>
using namespace std;

int i = 5; //global i

int main(int argc, char*argv[]){
    int j = 7;
    cout<< i << "\n";
    {
        int i = 10, j = 11;
        cout<< i << "\n";  // local value of i is 10
        cout<< ::i << "\n";  // global value of i is 5
        cout<< j << "\n";  // value of j is 11 here
        // The other j (valye 7) is inaccessible
    }
    cout<< j << "\n";  // value of j is 7 here
    return 0;
}