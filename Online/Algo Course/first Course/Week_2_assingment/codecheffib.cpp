#include<iostream>
#include <math.h> 
#include <string>  
using namespace std;
int main(){
    int t,count =0;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        string f[n+1],str;
        long long int p,result=0;
        f[0]="0";
        f[1]="1";
        if(n==1){
            cout<<1<<endl;
           }
        else{
        f[2]="10";
        for(int i= 3; i<n+1;i++){
            f[i]=f[i-1]+f[i-2];
        }
        str=f[n];
        int l = str.length();
        p=pow(2,l);
        for(int i=0;i<l;i++){
            int q= str[i]-'0';
            result+=(p/2)*q;
        }
        cout<<result<<endl;
        }
        t--;
    }
}