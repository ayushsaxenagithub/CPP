#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m[n];
    m[0] =0;
    m[1] =1;
    for (int i = 2; i<n;i++){
        m[i] = m[i-1]+m[i-2];
    }
    cout << m[n-1];
}