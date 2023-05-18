#include<iostream>
int main(){
    int e=5;
    int* b;
    b=&e;
    int** c;
    c=&b;
    std::cout <<b<<"  , "<<*b<<" , "<<&b;
    std::cout<<" \n ";
    std::cout <<c<<"  , "<<*c<<" , "<<&c<<" , "<<**c;
    int d[10];
    d[0]=10;
    d[1]=11;
    d[2]=12;
    d[3]=13;
    d[4]=14;
    d[5]=15;
    d[6]=16;
    d[7]=17;
    for(int i=0;i<10;i++)
        std::cout<<"\n"<<d[i];
    for(int i=0;i<10;i++)
        delete [] d;
    for(int i=0;i<10;i++)
        std::cout<<"\n"<<d[i];

}