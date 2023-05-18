#include<bits/stdc++.h>
using namespace std;

void printDFS_path(int** edges, bool* visited,int n, int starting_vertex,vector<int> &p){
    p.push_back(starting_vertex);
    cout<<"new p "<<endl;
    for(int i=0;i<p.size();i++){
      cout << p[i] <<" - ";
    }
    cout << endl;
    visited[starting_vertex] = true;
    for (int i = 0; i < n;i++){
        if(i == starting_vertex){
            continue;
        }
        if(edges[starting_vertex][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS_path(edges,visited,n,i,p);
        }        
    }
}



void getpathDFS(int start,int end, int ** edges, int n){
    bool* visited = new bool[n];
    for (int i=0; i < n;i++){
        visited[i]=false;
    }
    vector<int> p;
    for (int i=0; i < n;i++){
        if(!visited[i]){
            printDFS_path(edges,visited,n,i,p);
            if(visited[start]&&visited[end]){
                for(int j=0;j<p.size();j++){
                    if(p[j]==start){
                        cout<<p[j]<<" - ";
                        if(p[j]==end){
                            break;
                        }
                    }
                    else if(p[j]==end){
                        cout<<p[j]<<" - ";
                        if(p[j]==start){
                            break;
                        }
                    }
                }
            }
            else if(visited[start]&& !visited[end]){
                cout<<"No path from DFS"<<endl;
                break;
            }
            else if(!visited[start]&& visited[end]){
                cout<<"No path from DFS"<<endl;
                break;
            }
        }
    }
}



int main (){
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

    int start,end;
    cout<<"Enter Starting point"<<endl;
    cin>>start;
    cout<<"Enter ending point"<<endl;
    cin >>end;
    getpathDFS(start,end,edges,n);
}