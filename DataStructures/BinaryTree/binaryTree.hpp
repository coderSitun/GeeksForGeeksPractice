#ifndef __BINARY_TREE
#define __BINARY_TREE

class Node{
public:
    Node *parent;
    int data;
    Node *left, *right;
    Node(int data);
    Node(int data, Node *parent);
};

class BinaryTree{
private:
    enum BinaryTreeTypes{
        RED_BLACK_TREE
    };
protected:
    Node *root;
public:
    static BinaryTree* getBinaryTreeObject(BinaryTreeTypes type);
    BinaryTree();
    virtual void addNode(int x) = 0;
    virtual Node* findNode(int x) = 0;
    virtual bool removeNode(int x) = 0;
};

#endif