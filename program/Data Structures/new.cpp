#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

class emp{
    public:
    int id;
    char name[100];
    char address[1000];
    string dept;
    long long phone_number;
    int age;
};

void adm_data(emp &employees){
    ofstream file;
    file.open("Adm.dat");
    if( !file ) { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }
   file << employees.id<< endl;
   file << employees.name<< endl;
   file << employees.address<< endl;
   file << employees.dept<< endl;
   file << employees.phone_number<< endl;
   file << employees.age<< endl;
   file << "\n" << endl;
   file.close();
}
void it_data(emp &employees){
    ofstream file;
    file.open("IT.dat");
    if( !file ) { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }
   file << employees.id<< endl;
   file << employees.name<< endl;
   file << employees.address<< endl;
   file << employees.dept<< endl;
   file << employees.phone_number<< endl;
   file << employees.age<< endl;
   file << "\n" << endl;
   file.close();
}
void sal_data(emp &employees){
    ofstream file;
    file.open("Sal.dat");
    if( !file ) { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }
   file << employees.id<< endl;
   file << employees.name<< endl;
   file << employees.address<< endl;
   file << employees.dept<< endl;
   file << employees.phone_number<< endl;
   file << employees.age<< endl;
   file << "\n" << endl;
   file.close();
}
void pro_data(emp &employees){
    ofstream file;
    file.open("Pro.dat");
    if( !file ) { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }
   file << employees.id<< endl;
   file << employees.name<< endl;
   file << employees.address<< endl;
   file << employees.dept<< endl;
   file << employees.phone_number<< endl;
   file << employees.age<< endl;
   file << "\n" << endl;
   file.close();
}

int main(){
    emp employees[1000];
    ifstream file;
   file.open("emp.dat"); 
   int id=0,i=0;
    if (!file) {
        cout << "Something went wrong";
        exit(1); 
    }
    
    while (file >> id) {
        employees[i].id=id;
        file>>employees[i].name;
        file>>employees[i].address;
        file>>employees[i].dept;
        file>>employees[i].phone_number;
        file>>employees[i].age;
        i++;
    }
    cout << i<<endl;
   file.close();
    cout << employees[0].dept << endl;
    cout << employees[1].dept << endl;
    for (int j=0;j<i;j++){
        cout << employees[j].dept << endl;
        if (employees[j].dept=="Admin"){
            adm_data(employees[j]);
        }     
        else if (employees[j].dept=="Sales") sal_data(employees[j]);        
        else if (employees[j].dept=="Production") pro_data(employees[j]);        
        else if (employees[j].dept=="IT") it_data(employees[j]); 
        else 
            cout << "Something went wrong 87";
            exit(1);
    cout << employees[0].dept << endl;
    cout << employees[1].dept << endl;        
    }
   return 0;
}