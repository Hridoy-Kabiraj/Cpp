#include<iostream>
using namespace std;

void salary_change(int s){
    s = 30000;
    cout<<"Value inside function  "<<s <<endl;
}

int main(){
    int sal = 27000;
    salary_change(sal);
    cout<<"Value inside main "<<sal <<endl;
    return 0;
}