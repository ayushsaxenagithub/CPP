#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n,m,q,count=0;
        cin>>n>>m>>q;
        char a[n+1],b[q];
        string res = "Consistent";
        int p[q];
        for(int i=0;i<q;i++){
            cin>>b[i]>>p[i];
            if(b[i]=='+'){
                a[p[i]]='y';
                count++;
                if(count>m){
                    res = "Inconsistent";
                }

            }
            else{
                if (a[p[i]]=='y'){
                    a[p[i]]='n';
                    count--;
                }
                else{
                    res="Inconsistent";
                }
            }
        }
        cout<<res<<endl;
        t--;
    }
    
}