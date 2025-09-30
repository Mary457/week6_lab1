#include <iostream>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void product (double a , double b , double result) {
    result = a * b;
}


int main() {
    double a, b;
    double result;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    result = a * b;
    cout<<"the product is: "<<result;

    return 0;
}