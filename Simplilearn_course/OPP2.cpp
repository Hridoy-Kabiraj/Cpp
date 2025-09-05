#include<iostream>
using namespace std;

class Tradefair{
    private:
    int coupon;

    public:
    void setCoupons(int c){
        coupon = c;
    }
    int getCoupons(){
        return coupon;
    }
};

int main(){
    Tradefair t;
    t.setCoupons(50);
    cout<< "Coupon : "<<t.getCoupons();
    return 0;
}