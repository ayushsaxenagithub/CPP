#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a],c[5],res[5];
    for (int i=0;i<a;i++){ 
        cin>>b[i]>>c[i];
    }
    for (int i=0;i<a;i++){ 
        int j =sqrt(b[i]);
        res[i]=j*c[i];
    }
    for (int i=0;i<a;i++){
        cout<<res[i]<<endl;
    }
}