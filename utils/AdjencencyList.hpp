#include <iostream>
#include <list>
#include <map>
#include <set>
#include <queue>
using namespace std;
class Graph{
    map<char,list<map<char,int>>>adjList;
    public:
        void addEdge(char u,char v,int w=1){
            map<char,int> vertixV;
            map<char,int> vertixU;
            vertixU[v] = w;
            vertixV[v] =w;
            adjList[u].push_back(vertixV);
            adjList[v].push_back(vertixU);
        }
        void print(){
            for(auto i:adjList){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    for(auto k:j){
                        cout<<"("<<k.first<<","<<k.second<<")";
                    }
                }
                cout<<endl;
            }
        }
        void bfs(char startVertex){
            queue<char> q;
            set<char> visited;
            visited.insert(startVertex);
            q.push(startVertex);
            cout << "BFS Traversal: ";
            while (!q.empty()){
                char currentVertex = q.front();
                q.pop();
                cout << currentVertex << " ";
                for (auto neighborMap : adjList[currentVertex]){
                    for (auto neighbor : neighborMap){
                        char neighborNode = neighbor.first;
                        if (visited.find(neighborNode) == visited.end()){
                            visited.insert(neighborNode);
                            q.push(neighborNode);
                        }
                    }
                }
            }
            cout << endl;
        }
        void dfsHelper(char currentVertex, set<char> &visited) {
            visited.insert(currentVertex);
            cout << currentVertex << " "; 
            for (auto neighborMap : adjList[currentVertex]) {
                for (auto neighbor : neighborMap) {
                    char neighborNode = neighbor.first;
                    if (visited.find(neighborNode) == visited.end()) {
                        dfsHelper(neighborNode, visited);
                    }
                }
            }
        }
        void dfs(char startVertex) {
            set<char> visited;
            cout << "DFS (Recursive): ";
            dfsHelper(startVertex, visited);
            cout << endl;
        }

};