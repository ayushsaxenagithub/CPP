#include<bits/stdc++.h>
using namespace std;

int get_min_vertex(bool* visited, int* dist, int n){
    int min_vertex = -1;
    for(int i=0; i < n; i++){
        if(!visited[i]&&(min_vertex==-1 || dist[i]<dist[min_vertex]))
        min_vertex = i;
    }
    return min_vertex;
}



void dijsktras(int** edges, int n){
    bool* visited = new bool[n] ();
    int* dist = new int[n];
    for (int i = 1; i < n; i++){
        dist[i] = INT_MAX;
    }
    dist[0]=0;
    for(int i = 0; i < n; i++){
        int min_vertex = get_min_vertex(visited,dist,n);
        visited[min_vertex] = true;
        for(int j = 0; j < n; j++){
            if((edges[min_vertex][j]>0)&&(!visited[j])){
                int curr_dist = edges[min_vertex][j]+dist[min_vertex];
                if(curr_dist<dist[j]){
                    dist[j] = curr_dist;
                }
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<i<<" - dist - "<<dist[i]<<endl;
    }
}

int main(){    
    int n,e;
    cin >> n >> e;
    int** edges = new int*[n];
    for (int i = 0; i < n;i++){
        edges[i] = new int[n];
        for (int j = 0; j < n;j++){
            edges[i][j]=0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f,l,w;
        cin >> f >> l>>w;
        edges[f][l]=w;
        edges[l][f]=w;
    }
    cout<<endl;
    dijsktras(edges,n);
    for (int i = 0; i < n; i++){
        delete [] edges[i];
    }
    delete [] edges;
}