#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 int helper(string s,int size,vector<int> &dp)
{
    if(size<=1) return 1;

    if(s[size-1]=='0' && (s[size-2]=='1' || s[size-2]=='2')){
        if(size==2) return 1;
        else return helper(s,size-2,dp);
    }
    else if (s[size-1]=='0' && (s[size-2]>='3'|| s[size-2]=='0')){
      return 0;;
    }
     
    if(dp[size]>0)
    {
        return dp[size];
    }
    int output = 0;
    if(s[size-1]!='0'){
        output=helper(s,size-1,dp);
        if((s[size-2]=='1'||(s[size-2]=='2' && s[size-1]<'7')))
        {
            output+=helper(s,size-2,dp);
        }
    }
     
     dp[size]=output;
    return output;
}



int numDecodings(string s) {

    if(s[0]=='0')
    {
        return 0;
    }
    vector<int> dp(s.size()+1,0);
    
    return helper(s,s.size(),dp);
}

};
int main(){
    string s="121";
    Solution a;
    
    cout<<a.numDecodings(s)<<endl;
}