#include <bits/stdc++.h>

long double maxvalue(long double d[][2],long long n, long long m) {
    if (m == 0) return 0;
    long double v= 0;
    for (long long i = 0; i < n; i++) {
        if(m>0){
            long long c = ((d[i][1])<(m))?d[i][1]:m;
            m=m-c;
            long double value = d[i][0]/d[i][1];
            v=v+c*(d[i][0]/d[i][1]);
            d[i][1]-=c; 
        }
        else break;
    } 
    return v;
}

int main(){
    long long n,m;
    std::cin >> n >> m;
    std::vector<std::vector<long double> > a(n,std::vector<long double>(3,0));
    for (long long i=0 ; i<n ; i++) {
        std::cin>>a[i][1]>>a[i][2];
        a[i][0]=a[i][1]/a[i][2];
    }   
    sort(a.rbegin(),a.rend());
    long double d[n][2];
    for(long long i = 0 ; i < n ; i++){
        d[i][0]=a[i][1];
        d[i][1]=a[i][2];
    }
    long double ans = maxvalue(d,n,m);
    std::cout.precision(10);
    std::cout << ans << std::endl;
}