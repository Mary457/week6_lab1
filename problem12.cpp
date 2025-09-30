#include <iostream>
using namespace std;

 void displayEven(int num) {
     cout<<"even digits : ";
     while (num >0) {
         int digit = num%10;
         if (digit%2==0) {
             cout<<digit;
         }
         num = num/10;
     }
     cout<<endl;
 }
int main() {
     int num:
     cout<<"Enter a number : ";
     cin>>num;
     displayEven(num);
     return 0;
 }