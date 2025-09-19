#include<iostream>
#include<memory>
using namespace std;

int main(int argc, char* argv[]){
    shared_ptr<int> p_x(new int);
    cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    *p_x = 5;  // 'de-reference' to alert contents
    // Use this pointer elsewhere
    shared_ptr<int> p_y = p_x;
    cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    p_y.reset();
    cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    p_x.reset();
    cout<<"p_x use count: "<<p_x.use_count()<<"\n";

    return 0;
}