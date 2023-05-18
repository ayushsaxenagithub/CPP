#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,l,x,r;
        cin >> n>>l>>x;
        r=n-l;
        if(l<r){
            cout << l*x;
        }
        else{
            cout << r*x;
        }

        t--;
    }
}