#include <iostream>
using namespace std;
#include <algorithm>

void maximum(int n1, int n2, int n3) {
    int max_val = max(n1, n2, n3);
    cout<<max_val<<endl;
}
void minimum(int n1, int n2, int n3) {
    int min_val = min(n1, n2, n3);
    cout<<min_val<<endl;
}
int main() {
    int n1, n2, n3;
    cout <<"enter three numbers :"<<endl;
    cin>>n1>>n2>>n3;
    maximum(n1, n2, n3);
    minimum(n1, n2, n3);
    return 0;
}