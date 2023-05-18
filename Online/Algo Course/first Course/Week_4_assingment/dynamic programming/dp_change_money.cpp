#include<iostream>
using namespace std;

int dpchange(int coins[], int n,int m){
    int data[m+1];
    data[0]=0;
    for (int i = 1; i<=m; i++)
    {
        data[i]=INT_MAX;
    }
    
    for (int i = 1; i<=m; i++){
        for(int j = 0; j<=n; j++){
            if (coins[j]<=i){
                int curr = data[i-coins[j]];
                if (curr != INT_MAX && curr+1<data[i]){
                    data[i]=curr+1;
                }
            }
        }
    }
    if(data[m]==INT_MAX){
        cout<<"Invalid";
        exit(-1);
    }
    return data[m];
}

int main(){
    int coins[]={9, 6, 5, 4};
    int n = sizeof(coins)/sizeof(coins[0]);
    int m= 3;
    int result = dpchange(coins,n,m);
    cout<<result<<endl;
}