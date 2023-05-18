#import<iostream>
#include<string>
#include<conio.h>
using namespace std;
int i,j;


class PartyName{
public:
    string OwnerName;
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
    cout<<"\t CHALO CHUTIAPA SHURU KARE \n";
    cout<<"ENTER USERNAME : ";
    string username;
    getline(cin,username);
    cout<<"\nENTER PASSWORD : ";
    string password;
    getline(cin,password);
    int a=0,b;
    if(username=="a"&password=="a")
    {
        cout<<"\nWelcome to the forum\n";
        while(1<10){
            cout<<"Press 1 for Register Birthday party\n"
                <<"Press 2 Birthday Wish \n"
                <<"Press 3 Reading Gali\n"
                <<"Press 4 Contact up police for UP Police for hud hud dabbang\n"
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
                            cout<<"\nEnter Birthday Name :";
                            getline(cin,name[a].OwnerName);
                            cout<<"\n\n\n\n";

                            a++;
                            break;
                        }
                        case 2 : {
                            cout<<"Happy Birthday "<<name[0].OwnerName<<endl;
                            break;
                        }
                        case 3:{
                            cout<<"arey chutie padh le birthday toh badme bhi ban jayegi jab kuch ho jayegi /nnikal ya se chutie /n";
                            break;
                        }
                        case 4:{
                            cout<<"Go in kitchen and say loudly rampur walo ki jai ho \n";
                            cout<<"for more info in mummy ki daat contact our experienced person puranpur ki gundi \n";
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
