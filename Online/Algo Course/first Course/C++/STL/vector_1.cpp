#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vect;
    vect.push_back(34);
    vect.push_back(54);
    vect.push_back(65);
    for(vector<int>::iterator it = vect.begin(); it != vect.end(); it++){
        cout<<*it<<endl;
    }
    cout<<endl;
    return 0;
}