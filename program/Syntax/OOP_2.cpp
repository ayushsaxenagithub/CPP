#include<iostream>
using namespace std;
class main_function{
    virtual void show()=0;
};
class Employee:main_function{
    public:
    string name;
    int age;
    void show(){
        if(age>30){
            cout<<"Your age is greater than 30"<<endl;
        }
        else{
            cout<<"Your age is less than 30"<<endl;
        }
    }   
       
};
int main(){
    cout<<"Hello Everyone Welcome To OOPs Function"<<endl;
    Employee a,b;
    a.age=30;
    b.age=45;
    a.show();
    b.show();
    cin.get();
}