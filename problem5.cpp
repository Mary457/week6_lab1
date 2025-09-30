#include <iostream>
using namespace std;

void swap (int &a , int &b ) {
    if (a==b) {
        return;
    }
    a = a + b;
    b = a - b;
    a = a-b;
}

int main () {
    int a = 10;
    int b = 20;
    cout<<"before swap a=" <<a<<", b = "<<b<<endl;
    swap(a, b);
    cout<<"after swap a=" <<a<<", b = "<<b<<endl;

    return 0;
}