#include<bits/stdc++.h>
using namespace std;


int dpchange(int coins[],int n, int m){
    int data[m+1];
    for(int i=0;i<m+1;i++){
        data[i] = 0;
    }
    data[0]
    for(int i=1;i<m+1;i++){
        for(int j=0;j<n;j++){
            if(i>=coins[j]){
                data[i]+=data[i-coins[j]];
            }
        }
    }
    cout<<"here we done : "<<endl;
    cout<<"Here we go to again other function :";
    cout<<endl;
}


int main(){
    int n;
    // cout<<"Enter how many types of coins :";
    // cin>>n;
    // cout<<"\nEnter coins:"<<endl;
    // int coins[n];
    // for(int i=0;i<n;i++){
    //     cin>>coins[i];
    // }
    // int m;
    // cin>>m;
//    cout<<dpchange(coins,n,m);
    printf("hello");
    return 0;
}