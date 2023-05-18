#include <iostream>
using namespace std;
int main() {
    char a[100];
    cout << "Enter String :";
    gets(a);
    while (true) {
        cout << "\nEnter no.: " ;
        int i ;
        cin >> i ;
        cout << "\n"<<a[i];
    }
    return 0;
}