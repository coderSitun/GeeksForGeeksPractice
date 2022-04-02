#include"linkedList.hpp"

Node::Node(int data, Node *next){
    this->data = data;
    this->next = next;
}

Node::Node(int data){
    Node(data, nullptr);
}