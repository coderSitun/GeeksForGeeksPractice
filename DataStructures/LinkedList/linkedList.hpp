#ifndef __LINKED_LIST
#define __LINKED_LIST

struct Node{
    int data;
    Node *next;
    Node(int data = 0);
    Node(int data, Node *next);
    Node* deleteNode();
};

#endif