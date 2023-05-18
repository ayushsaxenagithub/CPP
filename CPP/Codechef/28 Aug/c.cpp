#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int k,n,count=0,max,e;
        cin >> n >> k;
        int c[n];
        for(int i=0;i<n;i++){
            cin >> c[i];
            if(i==0){
                max=c[i];
            }
            if(c[i]>=max){
                max=c[i];
            }
        }
        for(int i=0;i<n;i++){
            if(c[i]==max&&i>=k-1){
                e=n-i;
                count+=e;
            }
        }
        cout<<count<<endl;
        t--;
    }
}