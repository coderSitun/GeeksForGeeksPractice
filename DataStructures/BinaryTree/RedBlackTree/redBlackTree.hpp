#ifndef __RED_BLACK_TREE
#define __RED_BLACK_TREE

#include"binaryTree.hpp"

class RedBlackNode : public Node{
public:
    enum Color{
        RED,
        BLACK
    };
    Color color;
    RedBlackNode(int data);
    RedBlackNode(int data, RedBlackNode *parent);
    RedBlackNode(int data, RedBlackNode *parent, Color color);
};

class RedBlackTree : public BinaryTree {
private:;
public:
    void addNode(int x);
    RedBlackNode* findNode(int x);
    bool removeNode(int x);
};

#endif