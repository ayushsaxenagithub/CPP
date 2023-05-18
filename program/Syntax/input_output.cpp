#include<iostream>
using namespace std;
int main(){
    // cout <<"hello";
    // cin.get();
    // cout<<"hello programming world";
    // int a,b,c;
    // cout<<"hello : ";
    // cin>>a>>b>>c;
    // cout<<a<<" ,"<<b<<" ,"<<c;
    cout<<"Please Enter String";
    string a,b;
    getline(cin,a,',');
    cin>>b;
    cout<<a;
    cout<<b;
    cin.get();
}