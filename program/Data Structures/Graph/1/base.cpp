#include <iostream>
using namespace std;

int County(string a){
  if(a.size()<=1){
      if(a[0]=='0') return 0;
      else return a.size();
  }
  if(a[0]=='0') return 0;
  int n=a.size();
  int data[n];
  for(int i=0;i<n;i++){
      data[i]=0;
  }
  if(a[0]!='0') data[0]=1;
  for(int i=0;i<n;i++){
      if(a[i]=='0'){
          if((a[i-1]=='1'||a[i-1]=='2')){
              if(i<=1){
                data[i]=1;
                data[i-1]=0; 
              }
              else{
                  data[i]=data[i-1];
                data[i-1]=0;
              }           
          } 
      }
      else{
          if(((a[i-1]=='1'||a[i-1]=='2')&&(a[i]<='6'))||((a[i-1]=='1')&&(a[i]<='9'))){
            if(i>1){
                     data[i]+=data[i-2];
                 }
            else if(i==1){
                    data[i]+=1;
                }
          }
          if(i>0){
            data[i]+=data[i-1];
          }   
      }
      cout<<i<<"-"<<data[i]<<endl;
  }
  return data[n-1];
}

int main() {
    string a;
    getline(cin,a);
    cout<<County(a);
    return 0;
}