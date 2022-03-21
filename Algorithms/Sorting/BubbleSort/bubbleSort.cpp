#include "bubbleSort.hpp"

void BubbleSort::sort(){
    for(register int i = elements.size() - 1; i > 0; --i){
        for(register int j = 0; j < i; ++j){
            if(elements[j] > elements[j + 1])
                swapElements(j, j + 1);
        }
    }
}