#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double> number(0);
    cout<<"Size :"<<number.size()<<endl;
    int capacity = number.capacity();
    cout<<"Capacity :"<<capacity<<endl;
    for (int i = 0; i < 10000;i++) {
        if(number.capacity()>capacity) {
            capacity = number.capacity();
            cout<<"Capacity :"<<capacity<<endl;
        }
        number.push_back(i);
    }
    number.clear();
    cout<<"Size :"<<number.size()<<endl;
    cout<<"Capacity :"<<number.capacity()<<endl;
}