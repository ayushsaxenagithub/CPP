#include<bits/stdc++.h>
using namespace std;


int helper(string s,int size)
    {        
        if(size<=1) return 1;

      if(s[size-1]=='0' && (s[size-2]=='1' || s[size-2]=='2')){
          if(size==2) return 1;
          else return helper(s,size-2);
      }
        else if (s[size-1]=='0' && (s[size-2]>='3'|| s[size-2]=='0')){
             cout<<0<<endl;
             exit(-1);
        }
        int output = 0;
        if(s[size-1]!='0'){
            output=helper(s,size-1);      
            if((s[size-2]=='1'||(s[size-2]=='2' && s[size-1]<'7')))
            {
                output+=helper(s,size-2);
            }
        }      
        return output;
    }



    int numDecodings(string s) {
        
           if(s[0]=='0')
        {
            return 0;
        }
        return helper(s,s.size());
    }
    
    
    
    

int main(){
    string s;
    getline(cin,s);
    cout<<numDecodings(s)<<endl;
}