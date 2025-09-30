#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
    while (num2!=0) {
       int temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }
return num1;
}


int main () {
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int result = gcd(num1, num2);
    cout<<"GCD of 32"
    <<num1<< " and "<< num2<<" is "<<result<<endl;
    return 0;
}