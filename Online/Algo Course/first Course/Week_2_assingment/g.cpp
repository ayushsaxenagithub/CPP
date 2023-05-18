#include<iostream>
using namespace std;

int last_digits_sum(int m) {
    if(m<=1&&m>=0) return m;
    if(m<0) return 0;
    int prev=0,current=1,next,count=1;
    for(int i=2;i<m+1;i++){
        next=(prev+current)%10;
        prev=current;
        current=next;
        count=(count+current)%10;
    }
    return count;
}
int main(){
    long long int n,m,n1,rem1,m2,rem2;
    cin >> n >> m;
    n=n-1;
    n1=n/60;
    //here 60 is refer to Question 5th we already found it for fib series rem. when divided by 10, the loop repeated frequency is 60.
    rem1=n%60;
    n=((n1*last_digits_sum(60)%10)+last_digits_sum(rem1))%10;
    m2=m/60;
    rem2=m%60;
    m=((m2*last_digits_sum(60)%10)+last_digits_sum(rem2))%10;
    int res=(m-n)%60;
    if(res>=0){
        cout<<res<<endl;
    }
    else{
        cout<<10+res<<endl;
    }
}