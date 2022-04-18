#ifndef __ADJACENCY_LIST
#define __ADJACENCY_LIST

#include"graph.hpp"
#include<vector>

class AdjacencyList : public Graph{
private:
    std::vector<std::vector<int>> lists;
public:
    AdjacencyList(int n);
    void addEdge(int source, int sink);
    void removeEdge(int source, int sink);
    std::vector<int> bfs(int source);
};

#endif