#include<iostream>
using namespace std;

int main(){
    enum color{red, blue, green, yellow};

    color select=yellow;

    switch (select)
    {
        case red:
        cout<<"It is red.";
        break;

        case blue:
        cout<<"It is blue.";
        break;

        case green:
        cout<<"It is green.";
        break;

        case yellow:
        cout<<"It is yellow.";
        break;
    }
    return 0;
}