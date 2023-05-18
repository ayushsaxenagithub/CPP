#include<iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> a(2);
    // a[-1]=-1;
    // a[0] = 0;
    // a[1] = 1;
    // a[2] = 2;
    // a[3] = 3;
    // a[4] = 4;
    // a[5] = 5;
    // a[6]=6;
    // a[7]=7;
    // for (int i = -1; i <8;i++) {
    //     cout << a[i] << endl;
    // }
    vector<string> b(10);
    // b[-1]="A";
    b[0]="B";
    b[1]="C";
    b[2]="D";
    b[3]="E";
    b[4]="F";
    b[5]="G";
    b[6]="H";
    b[7]="I";
    for (int i = 0; i <8;i++) {
        cout << b[i] << endl;
    }
}