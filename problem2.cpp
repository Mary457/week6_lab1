#include <iostream>
using namespace std;
# include <cmath>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

void acceleration (double v1, double v2, double t, double result ) {
    if (t==0) {
        cerr <<"error. time cannot be zero!" << endl;
        result = 0.0;
    } else {
       result =  (v1+v2)/t;
    }
    }

int main() {
    double v1, v2, t;
    double result;
    cout<< "enter the initial velocity :";
    cin>>v1;
    cout << "enter the final velocity :";
    cin>>v2;
    cout<<"enter the time :";
    cin>>t;
    acceleration(v1,v2,t,result);
    if (t!=0) {
        cout<<"the linear acceleration is :"<<result;

    }



    return 0;

    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}