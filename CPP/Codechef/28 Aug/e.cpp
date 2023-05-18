#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        long long n,count=0;
        cin >> n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int prev=a[1],current=a[0],temp;
        for(long long i=0;i<n;i++){
            if(current>=a[i]){
                if(a[i]>prev&&i<n-1){
                    prev=a[i+1];
                    temp=current;
                    current=a[i];
                    count++;
                    for (long long l = i; l < n; l++)
                    {
                        if(a[l]>a[i]){
                            current=temp;
                            count--;
                        }
                    }
                    
                    
                }
                else{
                    if(i==n-1){
                        count++;
                    }
                }
            }
            else{
                count=-1;
                break;
            }
        }
        if (count>0){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        t--;
    }
}