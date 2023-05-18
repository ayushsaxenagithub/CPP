#import<iostream>
#include<string>
#include<conio.h>
using namespace std;
int i,j;


class PartyName{
public:
    string OwnerName;
    string CompanyName;
    string GSTNo;
    string Add;
};
PartyName name[20000];

class Typesofgood{
public:
    string nm;
    float qty;
    float inprice;
    float outprice;
};
int main(){
    cout<<"\t FORUM NAME \n";
    cout<<"ENTER USERNAME : ";
    string username;
    getline(cin,username);
    cout<<"\nENTER PASSWORD : ";
    string password;
    getline(cin,password);
    int a=0,b;
    if(username=="Name12"&password=="Name@123")
    {
        cout<<"\nWelcome to the forum\n";
        while(1<10){
            cout<<"Press 1 for Register party\n"
                <<"Press 2 See all party \n"
                <<"Press 3 for Register new product\n"
                <<"Press 4 for show all product\n"
                <<"Press 9 for exit\n";
            cout<<"Please Enter choice : ";
            int choice;
            cin>>choice;
            string ks;
            if(!isdigit(choice)){
                    switch (choice) {
                        case 1:{
                            cout<<"\t Registration side";
                            getline(cin,ks);
                            cout<<"\nEnter Company Name :";
                            getline(cin,name[a].CompanyName);
                            cout<<"\nEnter Owner Name :";
                            getline(cin,name[a].OwnerName);
                            cout<<"\nEnter GSTIN number :";
                            getline(cin,name[a].GSTNo);
                            cout<<"\nEnter Company Address :";
                            getline(cin,name[a].Add);
                            cout<<"\nCompany is registered Successfully as detail\n";
                            cout<<"\nOwner Name : "<<name[a].OwnerName;
                            cout<<"\nCompany Name : "<<name[a].CompanyName;
                            cout<<"\nGSTIN  number : "<<name[a].GSTNo;
                            cout<<"\nCompany Address : "<<name[a].Add<<endl;
                            cout<<"\n\n\n\n";

                            a++;
                            break;
                        }
                        default :{
                        cout<<"Sorry yo entered wrong key";
                        }
                    }
                    }else{
                        cout<<"sorry you press wrong key";
                    }



        }
    }
    else{
        cout<<"\n Sorry either username or password is incorrect";
    }

    return 0;
}

