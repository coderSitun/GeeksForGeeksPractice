#include"adjacencyMatrix.hpp"
#include<queue>

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

std::vector<int> AdjacencyMatrix::bfs(int source){
    std::vector<int> ans;
    if(source < totalNodes){
        bool *visited = new bool[totalNodes];
        for(int i = 0 ; i < totalNodes; ++i)
            visited[i] = false;
        
        std::queue<int> store;
        int current;
        visited[source] = true;
        store.push(source);

        while(!store.empty()){
            current = store.front();
            ans.push_back(current);
            store.pop();
            for(int i = 0; i < totalNodes; ++i){
                if(edges[current][i] && !visited[i]){
                    visited[i] = true;
                    store.push(i);
                }
            }
        }
    }
    return ans;
}