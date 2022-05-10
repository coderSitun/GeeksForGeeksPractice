#include<iostream>
#include<string>

#include"main.hpp"

BaseType getBaseType(char *input){
    if(!strcmp(input, "Algorithms") || !strcmp(input, "0"))
        return ALGORITHMS;
    if(!strcmp(input, "DataStructures") || !strcmp(input, "1"))
        return DATA_STRUCTURES;
    if(!strcmp(input, "Problems") || !strcmp(input, "2"))
        return PROBLEMS;
    return TOTAL_BASE_TYPES;
}

void performSortOperation(std::string subType){
    Sort *sortClass = Sort::getSortingClass(subType);
    if(sortClass != nullptr){
        int n, element;
        std::cin >> n;
        for(register int i = 0; i < n; ++i){
            std::cin >> element;
            sortClass->insert(element);
        }
        sortClass->sort();
        sortClass->print();
    }
    else{
        std::cout << "Subtype " << subType << " not found!!" << std::endl;
    }
}

int main(int argc, char* argv[]){
    if(argc > 1){
        BaseType baseType = getBaseType(argv[1]);
        
    }

    int testCaseCount;
    std::cin >> testCaseCount;
    std::string baseType, subType;
    while(testCaseCount--){
        std::cin >> baseType >> subType;
        if(baseType == "sort"){
            performSortOperation(subType);
        }
    }
    return 0;
}