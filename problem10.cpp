#include <iostream>
using namespace std;

 void intTriangularNumber (int n) {
    for (int i = 1; i <= n; i++) {
        int t = i*(i+1)/2;
        cout<<t<<"\t";
        if (i  % 5==0) cout <<endl;
    }

 }
int main() {
     intTriangularNumber(75);
     return 0;
 }