#include <iostream>
using namespace std;

void fun(float radius) {
    cout<<"circumference is :"<<2*3.14*radius<<endl;
    cout<<"area is :"<<3.14*radius*radius;
}


int main() {
    float radius;
    cout<<"enter the radius :";
    cin>>radius;
    fun(radius);

    return 0;
}