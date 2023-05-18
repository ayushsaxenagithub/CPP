#include<bits/stdc++.h>
using namespace std;



void printDFS(int** edges, int n, int starting_vertex, bool* visited){
    cout << starting_vertex << endl;
    visited[starting_vertex] = true;
    for (int i = 0; i < n;i++){
        if(i == starting_vertex){
            continue;
        }
        if(edges[starting_vertex][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited);
        }        
    }
}

void printBFS(int** edges, int n, int starting_vertex,bool* visited){
    queue<int> q;
    q.push(starting_vertex);
    visited[starting_vertex]=true;
    while(!q.empty()){
        int current_vertex=q.front();
        cout<<current_vertex<< endl;        
        q.pop();
        for(int i = 0; i < n;i++){
            if(i==current_vertex){
                continue;
            }
            if(edges[current_vertex][i]==1 && !visited[i]){
                 q.push(i);
                visited[i]= true;
            }
        }
    }
}

void DFS(int **edges,int n){
    bool* visited = new bool[n];
    for (int i=0; i < n;i++){
        visited[i]=false;
    }
    for (int i=0; i < n;i++){
        if(!visited[i]){
            printDFS(edges,n,i,visited);
        }
    }
}


void BFS(int** edges, int n){
    bool* visited = new bool[n];
    for (int i=0; i < n;i++){
        visited[i]=false;
    }
    for (int i=0; i < n;i++){
        if(!visited[i]){
            printBFS(edges,n,i,visited);
        }
    }
}

int main(){
    int n,e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i = 0; i < n;i++){
        edges[i] = new int[n];
        for(int j = 0; j < n;j++){
            edges[i][j] = 0;
        }
    }


    for(int i=0; i<e;i++){
        int f,s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    
    bool* visited = new bool[n];
    for (int i=0; i < n;i++){
        visited[i]=false;
    }
    for(int i=0; i < n;i++){
        for(int j=0; j < n;j++){
            cout<<"i "<<i<<" j "<<j <<" "<<edges[i][j]<<endl;
        }
    }
    cout<<"DFS"<<endl;
    DFS(edges,n);

    cout<<"\nBFS"<<endl;
    BFS(edges,n);
}
