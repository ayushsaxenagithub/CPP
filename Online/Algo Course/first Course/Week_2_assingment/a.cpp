#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long m[n+1];
    m[0] =0;
    m[1] =1;
    for (int i = 2; i<n+1;i++){
        m[i] = m[i-1]+m[i-2];
    }
    cout << m[n];
}