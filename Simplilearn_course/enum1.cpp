#include<iostream>
using namespace std;

enum supercars{Venom=301, Veryon=268, Valkyrie=240, Roadstar=250};

int main(){
    supercars speed1;
    supercars speed2;

    speed1 = Valkyrie;
    speed2 = Roadstar;

    if(speed1<speed2){
        cout<<"It's a win for Roadstar with the speed of "<<speed2;
    }
    else{
        cout<<"it's a win for Valkyrie with the speed of "<<speed1;
    }

    return 0;
}