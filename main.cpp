#include "utils/AdjencencyList.hpp"
int main(){
    Graph g;
    g.addEdge('0', '1');
    g.addEdge('0', '4');
    g.addEdge('1', '2');
    g.addEdge('1', '3');
    g.addEdge('3', '4');
    g.print();
    g.bfs('0');
    g.dfs('0');
}