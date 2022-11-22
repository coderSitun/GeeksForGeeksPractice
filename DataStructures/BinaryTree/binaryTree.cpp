#include"binaryTree.hpp"

Node::Node(int data){
    this->data = data;
    parent = left = right = nullptr;
}

Node::Node(int data, Node *parent){
    this->data = data;
    this->parent = parent;
    left = right = nullptr;
}

BinaryTree::BinaryTree(){
    root = nullptr;
}