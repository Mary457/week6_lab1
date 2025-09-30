#include <iostream>
using namespace std;

void  printFactorial (int n =1) {
    if (n<0) {
        cout<<"factorial is not defined for negative numbers :"<<endl;
        return ;
    } if (n==0 || n==1) {
        cout<<"factorial of n is  :"<<1<<endl;
        return ;
    } long long result =1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
  cout<<"factorial of "<<n<<": "<<result<<endl;
}

int main () {
   printFactorial(5);
    printFactorial(0);
    printFactorial();
    printFactorial(-3);
    return 0;
}