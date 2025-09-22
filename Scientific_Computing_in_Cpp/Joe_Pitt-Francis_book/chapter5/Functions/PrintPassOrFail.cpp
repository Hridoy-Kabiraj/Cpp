#include<iostream>
using namespace std;

void PrintPassOrFail(int score, int passMark);

int main(int argc, char* argv[]){
    int score = 29, pass_mark = 33;
    PrintPassOrFail(score, pass_mark);

    return 0;
}

void PrintPassOrFail(int score, int passMark){
    if (score >= passMark){
        cout<<"Pass - congratulations!\n";
    }
    else{
        // score < passMark
        cout<<"Fail - better luck next time\n";
    }
}