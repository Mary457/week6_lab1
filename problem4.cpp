#include <iostream>
using namespace std;

void fun(float radius) {
    cout<<"circumference is :"<<2*3.14*radius<<endl;
    cout<<"area is :"<<3.14*radius*radius;
}
void fun (float a, float b) {
    cout<<"area is :"<<a*b<<endl;
    cout<<"perimeter are :"<<2*(a+b)<<endl;
}

int main() {
    float radius;
    cout<<"enter the radius :";
    cin>>radius;
    fun(radius);

    float height, width;
    cout<<"enter the height :"<<endl;
    cin>>height;
    cout<<"enter the width :";
    cin>>width;
    fun( height, width);

    return 0;
}