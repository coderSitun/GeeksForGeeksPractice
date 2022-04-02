#include"linkedList.hpp"

Node::Node(int data, Node *next){
    this->data = data;
    this->next = next;
}

Node::Node(int data){
    Node(data, nullptr);
}

Node* Node::deleteNode(){
    Node *next = this->next;
    delete this;
    return next;
}