#ifndef __DISJOINT_SET_UNION
#define __DISJOINT_SET_UNION

#include<vector>

class DisjointSetUnion{
private:
    std::vector<int> parent;
    std::vector<int> rank;
    int findLeader(int a);
public:
    DisjointSetUnion(int n);
    void unite(int a, int b);
    bool checkAlliance(int a, int b);
};

#endif