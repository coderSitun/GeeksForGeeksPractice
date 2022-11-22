#include"disjointSetUnion.hpp"

int DisjointSetUnion::findLeader(int a){
    while(a < parent.size()){
        if(a == parent[a])
            return a;
        a = parent[a];
    }
    return -1;
}


DisjointSetUnion::DisjointSetUnion(int n) : parent(n), rank(n){
    for(int i = 0; i < n; ++i){
        parent[i] = i;
        rank[i] = 0;
    }
}

void DisjointSetUnion::unite(int a, int b){
    int leadA = findLeader(a);
    int leadB = findLeader(b);
    if(leadA != -1 && leadB != -1 && leadA != leadB){
        if(rank[leadA] < rank[leadB]){
            parent[leadA] = leadB;
        }
        else if(rank[leadA] > rank[leadB]){
            parent[leadB] = leadA;
        }
        else{
            parent[leadA] = leadB;
            ++rank[leadB];
        }
    }
}
bool DisjointSetUnion::checkAlliance(int a, int b){
    return findLeader(a) == findLeader(b);
}