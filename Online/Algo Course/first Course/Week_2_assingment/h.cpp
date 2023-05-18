#include<iostream>
using namespace std;
int fibonacci_squares_sum(long long int n){
    if(n == 0){
        return 0;
    }
    int res=1;
    long long prev =0;
    long long current =1;
    long long next;
    for (long long int i = 2; i<n+1;i++){
        // cout << i <<endl;
        next = (prev+current)%10;
        prev=current;
        current=next;
        res= (res+(next*next))%10;
    }
    return res%10;
}
int main(){
    long long int n;
    cin >>n;
    cout <<fibonacci_squares_sum(n);
}