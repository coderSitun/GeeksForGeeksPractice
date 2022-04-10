#ifndef __GRAPH
#define __GRAPH

class Graph{
private:
    enum GraphTypes{
        ADJACENCY_MATRIX,
        ADJACENCY_LIST
    };
protected:
    int totalNodes;
public:
    static Graph* getGraphObject(GraphTypes type, int totalNodes);
    Graph(int n);
    virtual void addEdge(int source, int sink) = 0;
    virtual void removeEdge(int source, int sink) = 0;
};

#endif