#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    // A block is any piece of code between curly brackets
    int i;
    i = 5;  // OK
    {
        int j;
        i = 10;  // OK
        j = 10;  // OK
    }
    //j = 5;  // incorrect - j not decleard (outside the curly brackets)

    return 0;
}