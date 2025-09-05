#include<iostream>
using namespace std;

int main()
{
    string s;

    cout<<"Enter a string ";

    getline(cin,s);

    cout<<"You have entred :";
    cout<<s<<endl;

    s.push_back('Y');
    cout<<"After using push back "<<s<<endl;

    s.pop_back();
    cout<<"After using pop back "<<s<<endl;

    return 0;

}