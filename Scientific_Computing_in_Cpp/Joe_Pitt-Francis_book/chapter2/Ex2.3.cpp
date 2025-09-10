#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int x;
    int sum = 0;
    
    cout<<"Enter -1 to get result.\n";
    cout<<"Enter the numbers: \n";
    
    for (int i = 0; i >= 0; i++){
        cin>>x;
        if ( x == -1){
            cout<<"Sum = "<<sum<<endl;
            break;
        }
        else if (x < -1){
            cout<<"You enterd "<<x<<" Which is negetive integer.\n";
            cout<<"Resetting the sum to zero...\n";
            x = 0;
            sum = 0;
        }

        sum += x;
        if (sum > 100){
            cout<<"Your sum exceeded 100!!\n";
            cout<<"The sum is "<<sum<<endl;
            break;
        }
    }

    return 0;
}