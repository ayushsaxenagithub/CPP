#include<bits/stdc++.h>

int comp(std::string x, std::string y){
    std::string xy =x+y;
    std::string yx =y+x;
    return xy.compare(yx)>0?1:0;
}

int main(){
    long long n;
    std::cin >> n;
    std::vector<std::string> a(n);
    for (long long i = 0; i <n;i++) {
        std::cin >> a[i];
    }
    sort(a.begin(), a.end(),comp);
    
    for (long long i = 0; i < n; i++) {
        std::cout << a[i];
    }
}