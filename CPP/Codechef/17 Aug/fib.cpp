#include<iostream>
#include <math.h>
#include <sstream>  
#include <string>  
using namespace std;
long long int sum(long long int a, long long int b) { 
    int count = 0;
    while(b != 0)
        {   
            b = b/10;
            ++count;
        }
    return a*count+b;
    }

int findSubSequence(string s, int num)
{ 
    int res = 0;
    int i = 0;
    while (num) {
        if (num & 1)
            res += s[i] - '0';
        i++;
        num = num >> 1;
    }
    int st;
    while (res != 0) {
      st+=(res % 10);
      res = res / 10;
   }
   int a=s;
    return a;
}
int combinedSum(string s)
{
    int n = s.length();
    int c_sum = 0;
    int range = (1 << n) - 1;
    for (int i = 0; i <= range; i++)
        c_sum += findSubSequence(s, i);
    return c_sum;
}


int main(){
    int t,count =0;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        long long int f[n+1];
        f[1]=1;
        f[2]=10;
        for(int i= 3; i<n+1;i++){
            f[i]=sum(f[i-1],f[i-2]);
        }
        ostringstream str1;
        str1<<f[n];
        string str=str1.str();
        cout<<combinedSum(str)<<endl;
        t--;
    }
}