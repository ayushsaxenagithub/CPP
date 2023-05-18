#include<iostream> 
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int a[10]={1,2,3,4,5};
    memset(a,-1,sizeof a);
    for(int i=0;i<10;i++){
        cout<<i<<" "<<a[i]<<endl;
    }

}