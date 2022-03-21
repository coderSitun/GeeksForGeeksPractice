#include "sort.hpp"
#include<iostream>

void Sort::swapElements(int index1, int index2){
    int temp = elements[index1];
    elements[index1] = elements[index2];
    elements[index2] = temp;
}

void Sort::insert(int element){
    elements.push_back(element);
}

void Sort::print(){
    for(register int i = 0; i < elements.size(); ++i){
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}