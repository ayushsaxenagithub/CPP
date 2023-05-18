#include<iostream>
#include<algorithm>
using namespace std;

int rec_edit(string str1 , string str2, int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(str1[a-1]==str2[b-1]) return rec_edit(str1, str2, a-1, b-1);
    return 1 + min(min(rec_edit(str1,str2, a, b-1),rec_edit(str1,str2, a-1, b)),rec_edit(str1,str2,a-1,b-1));
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout << rec_edit(str1,str2,str1.length(),str2.length()) << endl;
}
