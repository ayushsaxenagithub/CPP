#include<bits/stdc++.h>
int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<long long> > c(n,std::vector<long long>(2));
    std::vector<long long> d;
    for(long long i;i<n;i++){
        std::cin>>c[i][1]>>c[i][0];
    }
    sort(c.begin(),c.end());
    long long count = 1,comp=c[0][0];
    d.push_back(comp);
    for(long long i;i<n;i++){
        if(c[i][1]>comp){
            count++;
            comp = c[i][0];
            d.push_back(comp);
        }
    }
    std::cout<<count<<std::endl;
    for(long long i;i<d.size();i++){
        std::cout<<d[i]<<" ";
    }
}