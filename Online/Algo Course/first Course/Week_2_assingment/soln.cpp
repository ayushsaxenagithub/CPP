#include<iostream>
using namespace std;
int main(){
    long long a,b,j=0;
    cin >> a >> b;
    if(a>b)  j=a; 
    else  j=b;     
    for (long long i = j; i<a*b+1; i++){
        if (i%a==0 && i%b==0){ 
            cout<<i;
            exit(0);
        }        
    }
    cout<<"fails"<<endl;
}