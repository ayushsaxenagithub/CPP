#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        long long int prev=0,current=1,next;
        int n;
        cin>>n;
        if(n<=1) cout<<n<<endl;
        else{
            for(int i=2;i<n+1;i++){
                next=prev+current;
                prev=current;
                current=next;
            }
            cout<<current*pow(2,current+prev-1)<<endl;
        }
        t--;
    }
}