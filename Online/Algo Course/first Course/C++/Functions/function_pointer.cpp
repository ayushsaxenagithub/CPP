#include<iostream>
using namespace std;
void test() {
    cout<<"Testing"<<endl;
}
int main(){
    test();
    void (*ptest)();
    *ptest = test();
    
}