#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    do{
        sum += i;
        i++;
    }
    while(i<10);
    {
        cout<<"sum is "<<sum;
    }
}