#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;

    public:
    void input(){
        cout<<"Enter real and imaginary part respectively : ";
        cin>>real;
        cin>>imag;
    }

    Complex operator +(Complex obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output(){
        cout<<"Output is : "<<real<<"+"<<imag<<"i";
    }
};

int main(){
    Complex com1, com2, res;

    cout<<"Enter first complex number : "<<endl;
    com1.input();
    cout<<"Enter second complex number : "<<endl;
    com2.input();

    res = com1 + com2;
    res.output();

    return 0;

}