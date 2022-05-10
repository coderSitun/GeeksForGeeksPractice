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

BaseType getBaseType(char *input);

#endif