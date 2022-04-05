#include"singlyLinkedList.hpp"
#include<unordered_set>

SinglyLinkedList::SinglyLinkedList(){
    head = nullptr;
}

bool SinglyLinkedList::insert(int data, int after){
    if(after == 0){
        head = new Node(data, head);
    }
    else{
        Node *current = head;
        for(int i = 1; i < after; ++i){
            if(current == nullptr)
                break;
            else
                current = current->next;
        }
        if(current == nullptr)
            return false;
        current->next = new Node(data, current->next);
    }
    return true;
}

void SinglyLinkedList::insertAtEnd(int data){
    if(head == nullptr){
        head = new Node(data);
    }
    else{
        Node *current = head;
        while(current->next != nullptr)
            current = current->next;
        current->next = new Node(data);
    }
}

Node* SinglyLinkedList::getNodeWithData(int data){
    Node *current = head;
    while(current != nullptr){
        if(data == current->data)
            return current;
        current = current->next;
    }
    return nullptr;
}

bool SinglyLinkedList::deleteNode(Node *node){
    if(node != nullptr){
        if(head == node){
            head = head->next;
        }
        else{
            Node *current = head;
            while((current != nullptr) && (current->next != node)){
                current = current->next;
            }
            if(current == nullptr)
                return false;
            current->next = node->next;
        }
        delete node;
        return true;
    }
    return false;
}

void SinglyLinkedList::deleteCompleteLinkedList(){
    while(head != nullptr){
        head = head->deleteNode();
    }
}

int SinglyLinkedList::size(){
    Node *current = head;
    int size = 0;
    while(current != nullptr){
        ++size;
        current = current->next;
    }
    return size;
}

Node* SinglyLinkedList::getNthNode(int n){
    Node *current = head;
    for(int i = 1; i < n; ++i){
        if(current == nullptr)
            break;
        current = current->next;
    }
    return current;
}

Node* SinglyLinkedList::getNthNodeFromEnd(int n){
    Node *slow, *fast;
    slow = fast = head;
    for(int i = 0; i < n; ++i){
        if(fast == nullptr)
            return nullptr;
        fast = fast->next;
    }
    while(fast != nullptr){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

Node* SinglyLinkedList::getMiddleNode(){
    Node *slow, *fast;
    slow = fast = head;
    while((fast != nullptr) && (fast->next != nullptr)){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int SinglyLinkedList::getDataCount(int data){
    Node *current = head;
    int count = 0;
    while(current != nullptr){
        count += (current->data == data);
    }
    return count;
}

bool SinglyLinkedList::detectLoop(LoopDetectionMethod method){
    switch(method)
    {
        case HASH_METHOD:
            return detectLoopHashMethod();
        case POINTER_METHOD:
            return detectLoopPointerMethod();
    }
    return false;
}

bool SinglyLinkedList::detectLoopHashMethod(){
    std::unordered_set<Node*> visited;
    Node *current = head;
    while(current != nullptr){
        if(visited.find(current) == visited.end()){
            visited.insert(current);
        }
        else
            return true;
    }
    return false;
}

bool SinglyLinkedList::detectLoopPointerMethod(){
    Node *slow, *fast;
    slow = fast = head;
    while((fast != nullptr) && (fast->next != nullptr)){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}