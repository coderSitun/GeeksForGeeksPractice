#ifndef __GRAPH
#define __GRAPH

class Graph{
protected:
    int totalNodes;
public:
    Graph(int n);
    virtual void addEdge(int source, int sink) = 0;
    virtual void removeEdge(int source, int sink) = 0;
};

#endif