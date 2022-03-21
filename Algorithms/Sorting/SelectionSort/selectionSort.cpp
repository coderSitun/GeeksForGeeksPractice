#include "selectionSort.hpp"

void SelectionSort::sort(){
    register int min, minIndex;
    for(register int i = 0; i < elements.size(); ++i){
        min = elements[i];
        minIndex = i;
        for(register int j = i + 1; j < elements.size(); ++j){
            if(min > elements[j]){
                min = elements[j];
                minIndex = j;
            }
        }
        swapElements(i, minIndex);
    }
}