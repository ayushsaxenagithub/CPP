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




void printBFS_path(int** edges, int n, int starting_vertex,bool* visited,vector<int> &p){
    queue<int> q;
    q.push(starting_vertex);
    visited[starting_vertex]=true;
    while(!q.empty()){
        int current_vertex=q.front();
        p.push_back(current_vertex);       
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


bool checkpathDFS(int starting_vertex, int end, int** edges, int n, bool* visited, vector<int> &p){
    visited[starting_vertex]=true;
    if(starting_vertex==end){
        visited[end]=true;
        p.push_back(starting_vertex);
        return true;
    }
    for (int i = 0; i < n;i++){
        if(i == starting_vertex){
            continue;
        }
        if(edges[starting_vertex][i]==1){
            if(visited[i]){
                continue;
            }
        bool check = checkpathDFS(i,end,edges,n, visited,p);
        if(check){
            p.push_back(starting_vertex);
            return true;
        }
        }        
    }
    return false;
}

void getpathDFS(int start,int end, int ** edges, int n){
    bool* visited = new bool[n]();
    vector<int> p ;
    bool check = checkpathDFS(start,end,edges,n, visited,p);
    if(!check){
        cout<<"Path does not exist"<<endl;
    }
    else{
        p.push_back(start);
        for(int i=0;i<p.size();i++){
            cout<<p[n-i-1]<<" - ";
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
    cout<<"DFS"<<endl;
    DFS(edges,n);

    cout<<"\nBFS"<<endl;
    BFS(edges,n);
    int start,end;
    cout<<"Enter Starting point"<<endl;
    cin>>start;
    cout<<"Enter ending point"<<endl;
    cin >>end;
    getpathDFS(start,end,edges,n);
    // getpathBFS(start,end,edges,n);

}
