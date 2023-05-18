#include<iostream>
#include <bits/stdc++.h>
#include<map>
#include <unordered_map>
using namespace std;

int longSubarrWthSumDivByK(int arr[],
                          int n, int k)
{
    int m=n;
    
}  


int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,m,s;
        cin >> n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cout<<n-longSubarrWthSumDivByK(a,n,m)<<endl;
        t--;
    }
}