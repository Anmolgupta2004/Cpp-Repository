#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>

using namespace std;

void prepareAdjList(unordered_map<int, list<int >>adjList,vector<pair<int,int>> & edges){
   for(int i=0;i<edges.size();i++){
    int u=edges[i].first;
    int v=edges[i].second;

    adjList[u].push_back(v);
     adjList[v].push_back(u);
  
   }
}
    
void bfs(unordered_map<int, list<int >>adjList,unordered_map<int,bool>&visited , vector<int> &ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]==1;

    while(!q.empty()){
        int frontNode =q.front();
        q.pop();

        //store frontNode into ans

        ans.push_back(frontNode);
        //traverse all neighbours of frontNode

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }

}


int main(){
vector<int>BFS(int vertex, vector<pair<int,int>>edges){

    unordered_map<int, list<int >>adjList;
    vector<int>ans;
    unordered_map<int, bool >visited;

    prepareAdjList(adjList,edges);
    //printAdj(adjList);
    //traverse all components of a graph

for(int i=0;i<vertex;i++){
    if(!visited[i]){
        bfs(adjList,visited,ans,i);
    }
}    
return ans;
}

   
}