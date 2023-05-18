#include <iostream>
#include<map>
#include"cube.h"
#include<conio.h>



using namespace std;

int main()
{
        cube c;
    c.getlength(2.83);
    cout<<c.getsurfacearea()<<"\n";
        //<<c.getvolume();
    return 0;
}
