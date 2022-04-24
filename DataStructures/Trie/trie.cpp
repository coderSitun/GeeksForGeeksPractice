#include"trie.hpp"
#include<string>

template<>
void TrieValidator<std::string>::setChildrenSize(){
    childrenSize = 26;
}
template<>
void TrieValidator<int>::setChildrenSize(){
    childrenSize = 10;
}

template<>
void TrieValidator<std::string>::setDefaultRef(){
    currentRef = "";
}
template<>
void TrieValidator<int>::setDefaultRef(){
    currentRef = 0;
}

template<typename valT>
TrieValidator<valT>::TrieValidator(){
    setChildrenSize();
    setDefaultRef();
}

template<typename valT>
int TrieValidator<valT>::getChildrenSize(){
    return childrenSize;
}

template<typename valT>
void TrieValidator<valT>::setCurrentRef(valT ref){
    currentRef = ref;
}

//Needs correction
template<typename valT>
int TrieValidator<valT>::getNextChildIndex(){
    return -1;
}
template<>
int TrieValidator<std::string>::getNextChildIndex(){
    int index = -1;
    if(currentRef.length() > 0){
        if(currentRef[0] >= 'a' && currentRef[0] <= 'z')
            index = currentRef[0] - 'a';
        else if(currentRef[0] >= 'A' && currentRef[0] <= 'Z')
            index = currentRef[0] - 'A';
        currentRef = currentRef.substr(1);
    }
    return index;
}
template<>
int TrieValidator<int>::getNextChildIndex(){
    int index = -1;
    if(currentRef > 0){
        index = currentRef % childrenSize;
        currentRef /= childrenSize;
    }
    return index;
}

template<typename searchT, typename dataT>
Trie<searchT, dataT>::Node::Node() : children(childrenSize, nullptr){
    this->dataPtr = nullptr;
}
template<typename searchT, typename dataT>
Trie<searchT, dataT>::Node::Node(dataT *dataPtr) : children(childrenSize, nullptr){
    this->dataPtr = dataPtr;
}

template<typename searchT, typename dataT>
Trie<searchT, dataT>::Trie(){
    this->childrenSize = validator.getChildrenSize();
    this->root = new Node(nullptr);
}

template<typename searchT, typename dataT>
void Trie<searchT, dataT>::insert(searchT ref, dataT *dataPtr){
    validator.setCurrentRef(ref);
    Node *current = root;
    int childIndex;
    while((childIndex = validator.getNextIndex()) != -1){
        if(current->children[childIndex] == nullptr)
            current->children[childIndex] = new Node(nullptr);
        current = current->children[childIndex];
    }
    current->dataPtr = dataPtr;
}

template<typename searchT, typename dataT>
dataT* Trie<searchT, dataT>::search(searchT ref){
    validator.setCurrentRef(ref);
    Node *current = root;
    int childIndex;
    while(current != nullptr){
        if((childIndex = validator.getNextIndex()) == -1)
            return current->dataPtr;
        current = current->children[childIndex];
    }
    return nullptr;
}