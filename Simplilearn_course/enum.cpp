#include<iostream>
using namespace std;

enum captain{Avi, Sid, Robby, Sami, Jake};

int main(){
    captain cap = Sami;
    if(cap==Avi){
        cout<<"Our captain is AVi and it's vvalue is : "<<Avi<<endl;
    }
    else{
        cout<<"He is not a captain.";
    }

    return 0;
}