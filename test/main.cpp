#include<iostream>

#include "sort.hpp"

using namespace std;

void performSortOperation(string subType){
    Sort *sortClass = Sort::getSortingClass(subType);
    if(sortClass != nullptr){
        int n, element;
        cin >> n;
        for(register int i = 0; i < n; ++i){
            cin >> element;
            sortClass->insert(element);
        }
        sortClass->sort();
        sortClass->print();
    }
    else{
        cout << "Subtype " << subType << " not found!!" << endl;
    }
}

int main(){
    int testCaseCount;
    cin >> testCaseCount;
    string baseType, subType;
    while(testCaseCount--){
        cin >> baseType >> subType;
        if(baseType == "sort"){
            performSortOperation(subType);
        }
    }
    return 0;
}