#ifndef __ADJACENCY_MATRIX
#define __ADJACENCY_MATRIX

#include"graph.hpp"
#include<vector>

class AdjacencyMatrix : public Graph{
private:
    std::vector<std::vector<bool>> edges;
public:
    AdjacencyMatrix(int n);
    void addEdge(int source, int sink);
    void removeEdge(int source, int sink);
    std::vector<int> bfs(int source);
};

#endif