#include <iostream>
using namespace std;
int main()
{
int n;
int count = 0;
cout << "\nEnter the number: ";
cin >> n;
while(n != 0)
{
n = n/10;
++count;
}
cout << "\nNumber of digits: " << count << endl;
}