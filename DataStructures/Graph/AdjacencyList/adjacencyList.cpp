#include"adjacencyList.hpp"

AdjacencyList::AdjacencyList(int n) : Graph(n){
    for(int i = 0; i < n; ++i){
        lists.push_back(std::vector<int>());
    }
}

void AdjacencyList::addEdge(int source, int sink){
    if((source < totalNodes) && (sink < totalNodes)){
        lists[source].push_back(sink);
    }
}

void AdjacencyList::removeEdge(int source, int sink){
    if((source < totalNodes) && (sink < totalNodes)){
        int i;
        for(i = 0; i < lists[source].size(); ++i){
            if(source == lists[source][i])
                break;
        }
        if(i != lists[source].size()){
            lists[source][i] = lists[source][lists[source].size() - 1];
            lists[source].resize(lists[source].size() - 1);
        }
    }
}