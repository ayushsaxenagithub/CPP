#include<bits/stdc++.h>

long long compute_min_refiles(long long t, long long d, long long n, long long p[]){
    if(d>t) return 0;
    long long last_position = 0,current_position = 0,num_refiles = 0,i=0;
    while(current_position<p[n-1]){
        while((p[i]-last_position)<=d&&i<n){
            current_position=p[i];
            i++;
        }
        if(current_position==last_position) return -1 ;
        if(current_position<=p[n-1]) num_refiles++;
        
        last_position = current_position;
    }
    if((t-last_position)<d) return num_refiles;
    return -1; 
}

int main (){
    long long t,d,n;
    std::cin >> t >> d>> n;
    long long p[n+2];
    p[0]=0;
    p[n+1]=t;
    for(long long i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    long long ans = compute_min_refiles(t,d,n,p);
    std::cout<<ans<<std::endl;
}