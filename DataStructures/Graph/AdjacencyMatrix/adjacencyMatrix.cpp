#include"adjacencyMatrix.hpp"

AdjacencyMatrix::AdjacencyMatrix(int n) : Graph(n){
    for(int i = 0; i < n; ++i){
        edges.push_back(std::vector<bool>());
        for(int j = 0; j < n; ++j)
            edges[i].push_back(false);
    }
}

void AdjacencyMatrix::addEdge(int source, int sink){
    if((source < totalNodes) && (sink < totalNodes)){
        edges[source][sink] = true;
    }
}

void AdjacencyMatrix::removeEdge(int source, int sink){
    if((source < totalNodes) && (sink < totalNodes)){
        edges[source][sink] = false;
    }
}