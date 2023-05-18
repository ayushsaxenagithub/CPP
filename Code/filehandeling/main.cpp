#include <iostream>
#include<fstream>


using namespace std;

int main()
{
//;
//    fout.close();
    ifstream fin;
    fin.open("‪‪‪E:\c++\Code\filehandeling\data.txt");
    int x;
    if(!fin.is_open()){
        cout<<"Sorry";
    }
    while(fin>>x){
        cout<<x<<"  ";
    }
    fin.close();
    system("pause");
    return 0;
}
