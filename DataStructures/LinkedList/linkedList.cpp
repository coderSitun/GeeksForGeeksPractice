#include"linkedList.hpp"

Node::Node(int data){
    this->data = data;
}

Node::Node(int data, Node *next){
    Node(data);
    this->next = next;
}