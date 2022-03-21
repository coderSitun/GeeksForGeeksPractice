#ifndef __SORT
#define __SORT

#include<vector>

class Sort{
protected:
    std::vector<int> elements;
public:
    void insert(int element);
    virtual void sort() = 0;
    void print();
};

#endif