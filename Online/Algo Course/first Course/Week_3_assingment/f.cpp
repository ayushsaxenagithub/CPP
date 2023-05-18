#include<bits/stdc++.h>
int main(){
    long long n,i=0,sum=0;
    std::cin >> n; 
    while(sum<=n){
        i++; 
        sum+=i;
    }
    std::cout <<i-1<<std::endl;
    for(long long j=1;j<i-1;j++){
        std::cout <<j<<" ";
    }   
    std::cout << 2*(i-1)+n-sum+1<<std::endl;
}