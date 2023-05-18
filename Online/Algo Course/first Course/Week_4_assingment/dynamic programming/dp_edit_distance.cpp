#include<iostream>
#include<algorithm>
using namespace std;

int dp_edit(string str1 , string str2, int a, int b){
    int data[a+1][b+1];
    for(int i=0;i<=a+1;i++){
        for(int j=0;j<=b+1;j++){
            if(i==0) data[i][j]=j;
            else if(j==0) data[i][j]=i;
            else if(str1[i]==str2[j]) data[i][j]=data[i-1][j-1];
            else data[i][j]=1+min(min(data[i][j-1],data[i-1][j]),data[i-1][j-1]);
        }
    }
    return data[a][b];
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout << dp_edit(str1,str2,str1.length(),str2.length()) << endl;     
}
