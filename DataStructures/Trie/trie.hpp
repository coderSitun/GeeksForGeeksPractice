#ifndef __TRIE
#define __TRIE

#include<vector>

template<typename valT>
class TrieValidator{
private:
    int childrenSize;
    valT currentRef;
    void setChildrenSize();
    void setDefaultRef();
public:
    TrieValidator();
    int getChildrenSize();
    void setCurrentRef(valT ref);
    int getNextChildIndex();
};

template<typename searchT, typename dataT>
class Trie{
private:
    TrieValidator<searchT> validator;
    int childrenSize;
    struct Node{
        dataT *dataPtr;
        std::vector<Node*> children;
        Node();
        Node(dataT *dataPtr);
    };
    Node *root;
public:
    Trie();
    void insert(searchT ref, dataT *dataPtr);
    dataT* search(searchT ref);
};

#endif