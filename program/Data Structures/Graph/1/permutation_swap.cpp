#include<bits/stdc++.h>
using namespace std;

void permutation_swap(int** edges, int n, int p[], int q[]){
    printf("permutation swap");
    vector<vector <int> > g,a,b;

    bool* visited = new bool[n]();
    int k = 0;
    for (int i = 0; i <n;i++){
        printf("\nworking for loop in permutation swap");
        if(!visited[i]){
            g[k].push_back(i);
            visited[i] = true;
            for(int j = 0; j <n;j++){
                if(!visited[j]&&edges[j][i]==1){
                    g[k].push_back(j);
                    printf("\nworking for loop in permutation swap 1");
                }
            }            
            k++;
        }
    }
    for(int i = 0; i <k; i++){
        for(int j = 0; j < g[i].size(); j++){
            int w = g[i][j];
            a[i].push_back(p[w]);       
            b[i].push_back(q[w]);       
        }
        sort(a[i].begin(),a[i].end());
        sort(b[i].begin(),b[i].end());
        if(a[i]!=b[i]){
            cout<<"Not possible"<<endl;
            exit(-1);
        }
    }
    cout<<"Yes it is possible "<<endl;

}




int main(){
    int n,v;
    cin>>n;
    int p[n],q[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int** edges = new int*[n];
        for (int i = 0; i < n;i++){
        edges[i] = new int[n];
        for (int j = 0; j < n;j++){
            edges[i][j]=0;
        }
    }
    cin>>v;
    for(int j=0;j<v;j++){
        int s,e;
        cin>>s>>e;
        edges[s][e]=1;
        edges[e][s]=1;
        for(int i=0;i<n;i++) {
            if(i!=e&&i!=s){
                if(edges[i][s]==1&&edges[i][e]!=1){
                    edges[i][e]=1;
                    edges[e][i]=1;
                    cout<<"working 1"<<endl;
                }
                else if(edges[i][e]==1&&edges[i][s]!=1){
                    edges[i][s]=1;
                    edges[s][i]=1;
                    cout<<"working 2"<<endl;
                }
            }
        }
    }
    cout<<"working"<<endl;
    permutation_swap(edges,n,p,q);
    printf("done\n");
}
