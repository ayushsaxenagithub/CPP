#include<iostream>
using namespace std;
int main(){
    while(1){
        int i;
        cout << "Please Enter Choice : ";
        cin >> i;
        switch(i){
            case 0:{
                cout << "This is 0 case";
                break;
            }
            case 1:{
                cout << "This is 1 case";
                break;
            }
            default:{
                cout << "This is default case";
                break;
            }
        }
    }
}