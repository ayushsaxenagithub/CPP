
#include <iostream>
using namespace std;
#define max 100000000000000

long long int fn_mode_m(long long int n, long long int m) {
    int i;
	if(n<=1)
	return n;
	long long int a=0,b=1,c=(a+b)%n,counter=0;
	for(i=2;i<=n;++i){
		c = (a + b)%m;
		a=b;
		b=c;
	     }
    return c;
}


long long int findseries(long long int n) {
    int i;
	if(n<=1)
	return n;
	long long int a=0,b=1,c=(a+b)%n,counter=0;
	for(i=2;i<=max;++i){
		c = (a + b)%n;
		a=b;
		b=c;
		counter++;
		if(b==1 && a==0)
		break;
	     }
    return counter;
}

int main()
{
    long long int fn,m,ans,temp;
    cin>>fn>>m;
    if(fn%m<fn){
        ans=findseries(m);
        temp=fn%ans;
        cout<<fn_mode_m(temp,m);        }
    else{
        ans=fn_mode_m(fn,m);
        cout<<ans;
        }
    return 0;
}