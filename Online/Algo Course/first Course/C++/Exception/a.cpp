#include<iostream>
void ShowError(){
    bool success = true;
    std::string c="Error";
    if(success){
        throw 404;
    }
}
int main(){
    try {
        ShowError();
    }
    catch(int e){
        std::cout << "Error is : "<<e << std::endl;
    }
    std::cout << "Code is still running";
}