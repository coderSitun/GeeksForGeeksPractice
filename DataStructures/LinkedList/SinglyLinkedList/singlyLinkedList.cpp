#include"singlyLinkedList.hpp"

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