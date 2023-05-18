#include<iostream>
using namespace std;

long long int find_div (long long int b){
    if(b<=0) return b;
    long long int res=0,prev=0,current=1,next;
    for(long long int i=2;i<1000000000000;i++) {
        next=(prev+current)%b;
        prev=current;
        current=next;
        res++;
        if(prev==0&&current==1) break;
    }
    cout<<"res="<<res<<endl;
    return res;
}

long long int find_ans (long long int a,long long int b){
    if(a<=1) return a;
    long long int prev=0,current=1,next;
    for(long long int i=2;i<a+1;i++) {
        next=(prev+current)%b;
        prev=current;
        current=next;
        }
        return current;
}

int main(){
    long long int a,b;
    cin >> a >> b;
    if(a%b<a){
        long long int div = find_div(b);
        a=a%div;
        cout<<find_ans(a,b);
    }
    else{
        cout<<find_ans(a,b);
    }
}