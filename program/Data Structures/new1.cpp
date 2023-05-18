#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    char a[n][m];
    int t[n][m],sx,sy,ex,ey,w[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            if(a[i][j]=='S')
            {
                sx=i;
                sy=j;
            }
            if(a[i][j]=='G'){
                ex=i;
                ey=j;
            }

        }
    }
    t[ex][ey]=0;
}