#ifndef __SORT
#define __SORT

#include<vector>
#include<string>

class Sort{
protected:
    std::vector<int> elements;
    void swapElements(int index1, int index2);
public:
    static Sort* getSortingClass(std::string name);
    void insert(int element);
    virtual void sort() = 0;
    void print();
};

#endif