#include<iostream>
using std::cout;
using std::cin;

int fibonacci(int n) { 
    if (n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <n+1; i++) {
    int result = fibonacci(i);
    cout << result << ",";
    }
    cin.get();
}