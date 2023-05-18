#include <iostream>
#include <string>
using namespace std;
int main() {
   char s1[] = "45";
   char c = 's';

   int x = stoi(s1);
   cout << "The value of x : " << x;

   int y = (int)(c);
   cout << "\nThe value of y : " << y;

   return 0;
}
