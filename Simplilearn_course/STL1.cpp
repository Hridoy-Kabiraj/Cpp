#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int>ar={1, 2, 3, 4, 5};

    vector<int>::iterator ptr;

    cout<<"The elements of vector ar : ";
    for(ptr=ar.begin();ptr<ar.end();ptr++){
        cout<<*ptr<<" ";
    }

    return 0;
}