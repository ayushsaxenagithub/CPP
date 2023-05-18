#include<iostream>
using namespace std;

int recurssionchange(int coins[], int n,int m){
    if(m==0) return 0;
    int min_coins=INT_MAX;
    for (int i = 0; i < n; i++){
        if (coins[i]<=m){
            int curr = recurssionchange(coins,n,m-coins[i]);
            if (curr + 1 < min_coins && curr != INT_MAX){
                min_coins=curr + 1;
            }
        }
    }
    return min_coins;
}

int main(){
    int coins[]={9, 6, 5, 1};
    int n = sizeof(coins)/sizeof(coins[0]);
    int m= 11;
    int result = recurssionchange(coins,n,m);
    cout<<result<<endl;
}