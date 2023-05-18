#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n[t],m[t],q;
    string res[t];
    for (int i = 0; i <t;i++){
        res[i] = "Consistent";
    }
    for (int i = 0; i <t;i++) {
        cin>>n[i]>>m[i]>>q;
        int p[q],count=0;
        char b[q],a[q];
        for(int i=0;i<q;i++){
            cin>>b[i]>>p[i];
            if(b[i]=='+'){
                a[p[i]]='y';
                count++;
                if(count>m[i]){
                    res[i] = "Inconsistent";
                }

            }
            else{
                if (a[p[i]]=='y'){
                    a[p[i]]='n';
                    count--;
                }
                else{
                    res[i]="Inconsistent";
                }
            }
        }
    }
    for (int i = 0; i <t;i++){
        cout<<res[i]<<endl;
    }
}