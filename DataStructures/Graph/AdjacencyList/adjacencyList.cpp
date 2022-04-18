#include"adjacencyList.hpp"
#include<queue>

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

std::vector<int> AdjacencyList::bfs(int source){
    std::vector<int> ans;
    if(source < totalNodes){
        bool *visited = new bool[totalNodes];
        for(int i = 0; i < totalNodes; ++i)
            visited[i] = false;
        
        std::queue<int> store;
        int current;
        visited[source] = true;
        store.push(source);

        while(!store.empty()){
            current = store.front();
            ans.push_back(current);
            store.pop();
            for(int i = 0; i < lists[current].size(); ++i){
                if(!visited[lists[current][i]]){
                    visited[lists[current][i]] = true;
                    store.push(lists[current][i]);
                }
            }
        }
    }
    return ans;
}