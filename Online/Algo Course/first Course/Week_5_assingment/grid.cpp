#include<iostream>
using namespace std;
int getgrid(int a, int b){
    if(a>=0&&b>=0){
    if( a == 1 && b == 1) return 1;
    else if(a==0 || b==0) return 0;
    else return getgrid(a-1,b)+getgrid(a,b-1);
}}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=getgrid(a,b);
    cout<<c<<"\nstill Running"<<endl;
}