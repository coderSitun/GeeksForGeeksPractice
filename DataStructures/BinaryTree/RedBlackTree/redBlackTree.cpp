#include"redBlackTree.hpp"

RedBlackNode::RedBlackNode(int data) : Node(data){
    color = BLACK;
}

RedBlackNode::RedBlackNode(int data, RedBlackNode *parent) : Node(data, parent){
    color = RED;
}

RedBlackNode::RedBlackNode(int data, RedBlackNode *parent, Color color) : Node(data, parent){
    this->color = color;
}

void RedBlackTree::addNode(int x){
    if(root == nullptr){
        root = new RedBlackNode(x);
    }
}