#include<bits/stdc++.h>
using namespace std;

void horse_connected(int** edges, int n){
    if(n<=1){
        cout<<n<<endl;
        exit(1);
    }
    bool* visited = new bool[n] ();
    vector<int> p;
    for (int i = 0; i < n;i++){
        if(!visited[i]){
            visited[i] = true;
            int count = 1;
            for (int j = 0; j < n;j++){
                if(!visited[j]&&edges[i][j] == 1){
                    visited[j] = true;
                    count++;
                }
            }
            p.push_back(count);
        }
    }
    int ans = 1;
    for (int i = 0; i < p.size(); i++){
        int prod = 1;
        for (int j = 0; j < p[i]; j++){
            prod*=(j+1);
        }
        ans*= prod;
    }
    cout << ans << endl;
}

int main(){
    int n,e;
    cin>>n;
    cin>>e;
    int** edges = new int*[n];
        for (int i = 0; i < n;i++){
        edges[i] = new int[n];
        for (int j = 0; j < n;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int s,e;
        cin>>s>>e;
        edges[s][e]=1;
        edges[e][s]=1;
        for(int j=0;j<n;j++) {
            if(i!=e&&i!=s){
                if(edges[j][s]==1&&edges[j][e]!=1){
                    edges[j][e]=1;
                    edges[e][j]=1;
                }
                else if(edges[j][e]==1&&edges[j][s]!=1){
                    edges[j][s]=1;
                    edges[s][j]=1;
                }
            }
        }
    }
    horse_connected(edges,n);
}