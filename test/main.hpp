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
protected:
    static void printUsage();
public:
    static MainHelp* getSubClass(char *input);
};

#endif