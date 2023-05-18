#include <iostream>
using namespace std;
class Employee{
    public:
        string name;
        string post;
        int age;
        int salary;
        void check();
        void show_detail(){
            cout << "The name is: " << name <<endl;
            cout << "The post is: " << post <<endl;
            cout << "The age is: " << age <<endl;
            cout << "The Salary is: " << salary <<endl;
    }
};
void Employee::check() {
    cout << "It is Working!" << endl;
    cout << name <<endl;
}
int main(){
    cout << "Lets Check this \n";
    Employee a;
    a.name = "John";
    a.post = "Manager";
    a.age = 25;
    a.salary = 25000;
    a.show_detail();
    a.check();
    cout<<"Write This";
    cout << "Nice This is Work!" << endl; 
    cin.get();  
}