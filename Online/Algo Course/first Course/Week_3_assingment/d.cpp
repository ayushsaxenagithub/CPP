#include<bits/stdc++.h>
int main(){
    long long product = 0, n;
    std::cin >> n;
    std::vector<long long> a(n),b(n);
    for (long long i = 0; i <n;i++) {
        std::cin >> a[i];
    }
    for (long long i = 0; i <n;i++) {
        std::cin>> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (long long i = 0; i <n;i++) {
        product += a[i]*b[i];
    }
    std::cout <<product;
}