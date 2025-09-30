#include <iostream>
using namespace std;

void sum (double n1 , double n2) {
    cout <<"sum is "<<n1+n2<<endl;
}
void subtract (double n1, double n2) {
    cout <<"subtract is "<<n1-n2<<endl;
}
void multiply (double n1, double n2) {
    cout <<"multiply is "<<n1*n2<<endl;
}
void divide (double n1, double n2) {
    if (num2!=0) {
        cout <<"divide is "<<n1/n2<<endl;
    } else {
        cout<<"error!. division is not permitted"endl;
    }}
int main () {
    doubel n1,n2;
    cout <<"Enter the first number: ";
    cin>>n1;
    cout <<"Enter the second number: ";
    cin>>n2;
    sum(n1,n2);
    subtract(n1,n2);
    multiply(n1,n2);
    divide(n1,n2);
    return 0;

}