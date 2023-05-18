#include<iostream>
using namespace std;
long long int gcd(long long int a, long long int b){
    if (b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    long long int a,b,result;
    cin >> a >> b;
    if(a>b)
        result = gcd(a,b);
    else
        result = gcd(b,a);
    long long int res= result*(b/result)*(a/result);
    cout << res<< endl;
}