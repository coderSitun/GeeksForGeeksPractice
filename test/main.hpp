#ifndef __MAIN
#define __MAIN

#include "sort.hpp"

enum MainType{
    ALGORITHMS,
    DATA_STRUCTURES,
    PROBLEMS,
    TOTAL_BASE_TYPES
};

class MainHelp{
private:
    static MainType getMainType(char *input);
protected:
    static void printUsage();
public:
    static MainHelp* getSubClass(int argc, char *argv[]);
    virtual void execute() = 0;
};

#endif