#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

void dfs(int node, int parent, int timer, vector<int> &disc, vector<int> &low, 
unordered_map<int,bool> &vis, vector<int> &ap, unordered_map<int,list<int>> &adj){
    vis[node] = true;
    disc[node]  = low[node] = timer++;
    int child = 0;

    for(auto i: adj[node]){
        if(i == parent){
            continue;
        }
        if(!vis[i]){
            dfs(i,node,timer,disc,low,vis,ap,adj);
            low[node] = min(low[node],low[i]);
            //check ap
            if(low[i] >= disc[node] && parent != -1){
                ap[node] = 1;
            }
            child++;
        }
        else{//back edge
            low[node] = min(low[node], disc[i]);
        }
    }
    //to handle source node i.e 0
    if(parent == -1 && child > 1){
        ap[node] = 1;
    }
}

int main(){
    int n=5;
    int e=5;
    vector<pair<int,int>> edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));
    //adj list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n);
    vector<int> low(n);
    int parent = -1;
    unordered_map<int,bool> vis;
    vector<int> ap(n,0);

    for (int i = 0; i < n; i++)
    {
        disc[i] = low[i] = -1;
        vis[i] = false;
    }

    //dfs
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            dfs(i,parent,timer,disc,low,vis,ap,adj);
        }
    }
    
    ///print ap
    cout<<"Articulation points are:"<<endl;
    for (int i = 0; i < n; i++)
    {
        if(ap[i] != 0){
            cout<<i<<" ";
        }
    }cout<<endl;
    
    return 0;
}