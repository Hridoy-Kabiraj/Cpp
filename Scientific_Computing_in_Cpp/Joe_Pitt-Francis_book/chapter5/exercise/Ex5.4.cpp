#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void SD(vector<double> v, int size); // Function to calculate mean and Standard deviation 

int main(int argc, char* argv[]){
    vector<double> v;
    int N;
    cout<<"Enter the size of the array: ";  // Taking size of array
    cin>>N;
    cout<<"Enter the elemnets of the array: \n";  // Taking array elements
    double x;
    for (int i = 0; i<N; i++){
        cin>>x;
        v.push_back(x);
    }

    // Calculate mean and standrad deviation(SD)
    SD(v, N);

    return 0;
}

// Function definition
void SD(vector<double> v, int size){
    int N = size;
    // calculating mean
    double sum = 0;
    for (int i = 0; i<N; i++){
        sum += v[i];
    }
    double mean = sum / N;
    cout<<"Mean = "<< mean<<"\n";

    // Calculating standrade deviation
    sum = 0; // Reseting
    // Nominator sum
    for (int i = 0; i<N; i++){
        sum += pow(fabs(v[i] - mean), 2);
    }
    double standrad_deviation = sqrt(sum / (N - 1));
    cout<<"Standrad deviation = "<<standrad_deviation<<"\n";
}