#ifndef __MAIN
#define __MAIN

#include "sort.hpp"

enum BaseType{
    ALGORITHMS,
    DATA_STRUCTURES,
    PROBLEMS,
    TOTAL_BASE_TYPES
};

class MainHelp{
private:
    static BaseType getBaseType(char *input);
public:
    static void printUsage();
    static MainHelp* getSubClass(char *input);
    virtual void workOut(char *input1) = 0;
    virtual void workOut(char *input1, char *input2) = 0;
};

#endif