#include<iostream>
using namespace std;

long long dpchange(long long a,int b[],int n){
    long long d[a+1];
    d[0] = 0;
    for (long long i=1 ; i < a+1 ; i++){
        d[i] = 9999999999999;
    }
    for (long long i=1 ; i < a+1 ; i++){
        for (long long j=0 ; j < 3 ; j++){
            if(i>=b[j]){
                int curr=d[i-b[j]];
                if(curr!=9999999999999 && curr+1<d[i]){
                    d[i] = curr+1;
                }
            }
        }
    }
    return d[a]; ;
}

int main(){
    long long a;
    cin>>a;
    int b[3] = {1,5,10},n=3;
    long long change =dpchange(a,b,n); 
    cout<<change;
}