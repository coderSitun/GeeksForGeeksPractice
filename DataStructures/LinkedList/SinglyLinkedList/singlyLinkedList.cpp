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