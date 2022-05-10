#ifndef __MAIN
#define __MAIN

#include<cstring>
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
    static void printUsage();
public:
    static MainHelp* getSubClass(char *input);
};

#endif