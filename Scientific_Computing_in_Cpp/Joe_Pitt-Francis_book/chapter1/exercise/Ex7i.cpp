#include<iostream>
using namespace std;

int main(int argc, char*argv[]){
    const int a = 3;
    int b = 5;
    a = b;  // error: const value can't be modified
    cout<<a;
}