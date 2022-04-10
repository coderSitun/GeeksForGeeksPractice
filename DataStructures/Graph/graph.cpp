#include"graph.hpp"
#include"adjacencyMatrix.hpp"
#include"adjacencyList.hpp"

Graph* Graph::getGraphObject(GraphTypes type, int totalNodes){
    switch(type)
    {
        case ADJACENCY_MATRIX:
            return new AdjacencyMatrix(totalNodes);
        case ADJACENCY_LIST:
            return new AdjacencyList(totalNodes);
    }
    return nullptr;
}

Graph::Graph(int n){
    totalNodes = n;
}