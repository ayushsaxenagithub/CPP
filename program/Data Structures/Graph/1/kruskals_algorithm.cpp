#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int src;
        int dest;
        int weight;
};

int get_parent(int a,int *parent){
    if(parent[a]==a){
        return a;
    }
    return parent[a];
}

bool compare(Edge a, Edge b){
    return a.weight < b.weight;
}


Edge* kruskal(Edge* edge, int n ,int e){
    Edge* output = new Edge [n-1];
    sort(edge,edge+e,compare);
    int* parent= new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int i=0;
    int count=0;
    while(count<n-1){
        int srcparent = get_parent(edge[i].src,parent);
        int destparent = get_parent(edge[i].dest,parent);
        if(srcparent != destparent){
            output[i]=edge[i];
            parent[destparent]=srcparent;
            count++;
        }
        i++;
    }
    return output;
}

int main (){
    int n,e;
    cin >> n >> e;
    Edge* edge = new Edge[e];
    for(int i=0;i<e;i++){
        cin>>edge[i].src >>edge[i].dest>> edge[i].weight;
    }
    Edge* output = kruskal(edge,n,e);
    for(int i=0;i<n-1;i++) {
        if(output[i].src < output[i].dest){
            cout<<output[i].src<<" "<<output[i].dest<<" "<<output[i].weight;
        }
        else{
            cout<<output[i].dest<<" "<<output[i].src<<" "<<output[i].weight;
        }
    }
}