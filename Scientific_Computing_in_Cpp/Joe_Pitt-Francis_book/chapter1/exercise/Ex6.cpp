#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int num_car[5];
    cout<<"Enter the number of cars for 5 days: \n";
    for (int i = 0; i<5; i++){
        cin>>num_car[i];
    }
    cout<<"\n";
    
    double sum = 0;
    for (int i = 0; i<5; i++){
        sum += num_car[i];
    }

    cout<<"Average number of cars is "<<sum/5<<"\n";
}