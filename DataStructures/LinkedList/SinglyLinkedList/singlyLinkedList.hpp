#ifndef __SINGLY_LINKED_LIST
#define __SINGLY_LINKED_LIST

#include"linkedList.hpp"

class SinglyLinkedList{
private:
    Node *head;
public:
    SinglyLinkedList();
    bool insert(int data, int after = 0);
    void insertAtEnd(int data);
    Node* getNodeWithData(int data);
    bool deleteNode(Node *node);
    void deleteCompleteLinkedList();
    int size();
    Node* getNthNode(int n);
    Node* getNthNodeFromEnd(int n);
    Node* getMiddleNode();
};

#endif