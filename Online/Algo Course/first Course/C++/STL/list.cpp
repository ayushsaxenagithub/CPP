#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> number;
    number.push_back(1);
    number.push_back(2);
    number.push_front(3);
    number.erase(number.begin());
    for(list<int>::iterator it = number.begin(); it != number.end(); it++){
        cout << *it << endl;
    }

}