#include<iostream>
using namespace std;

int last_digits_sum(int m) {
    if(m<=1) return m;
    int prev=0,current=1,next,count=1;
    for(int i=2;i<m+1;i++){
        next=(prev+current)%10;
        prev=current;
        current=next;
        count=(count+(current*current))%10;
    }
    return count;
}
int main(){
    long long int n,m;
    int rem;
    cin >> n;
    //here 60 comes from rem sequence refer to question 5
    m=n/60;
    rem=n%60;
    int res= last_digits_sum(rem)%10;
    cout<<((m*last_digits_sum(60)%10)+last_digits_sum(rem))%10<<endl;
}