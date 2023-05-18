#include<iostream>
using namespace std;
int Get(int *p,int i,int size){
    if(i<0&&i>size){
        cout << "Somethings went wrong ";
        exit(1);
    }
    return p[i];
}

int Set(int *p, int i , int size, int value){
    if(i<0&&i>size){
        cout << "Somethings went wrong ";
        exit(1);
    }
    p[i] = value;
    cout<<"checking";
}

int PushBack(int *p,int value,int &n){
    int t=sizeof(*p);
    if(t==n){
        n=2*n;

    }
}

int main(){
    int *p=new int[3];
    cout<<sizeof(*p)<<endl;
    p[0]=45;
    cout<<*p<<endl;
    p[1]=54;
    p[2]=16;
    p[3]=78;
    p[4]=4; 
    p[5]=5;
    p[6]=6;
    p[7]=8;
    p[8]=9;
    p[9]=10;
    p[11]=12;
    p[12]=13;
    p[254]=254;
    for(int i = 0; i<255 ; i++) {
        cout<<i<<"th value: "<<p[i]<<endl;
    }
    cout<<sizeof(*p)<<endl;
}