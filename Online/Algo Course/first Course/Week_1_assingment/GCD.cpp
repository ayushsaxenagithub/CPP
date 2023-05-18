#include<iostream>
using namespace std;
int main(){
    int a,b,c,temp =0;
    cin >> a >> b;    
    for (int i = 1; i<a+b; i++){
        if (a%i==0 && b%i==0){
            temp =i;
        }
        if(i>a || i>b){
            break;
        }
    }
    cout << temp << endl;
}