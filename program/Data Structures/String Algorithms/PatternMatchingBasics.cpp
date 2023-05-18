#include<bits/stdc++.h>
using namespace std;

bool IsMatching(string s, string p){
    bool found = false;
    int a = s.length();
    int b = p.length();
    for(int i = 0; i < a;i++) {
        if(p[0]==s[i]){
        found = true;
            for(int j = 1; j < b;j++){
                if(p[j]!=s[i+j]){
                    found = false;
                    break;
                }
            }
            if (found==true){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string s,p;
    cin >> s >> p;
    cout<<IsMatching(s,p)<<endl;
}