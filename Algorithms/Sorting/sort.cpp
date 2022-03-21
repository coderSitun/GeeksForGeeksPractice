#include "sort.hpp"
#include<iostream>

void Sort::insert(int element){
    elements.push_back(element);
}

void Sort::print(){
    for(register int i = 0; i < elements.size(); ++i){
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}