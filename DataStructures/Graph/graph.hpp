#ifndef __GRAPH
#define __GRAPH

class Graph{
public:
    virtual void addEdge(int source, int sink) = 0;
    virtual void removeEdge(int source, int sink) = 0;
};

#endif