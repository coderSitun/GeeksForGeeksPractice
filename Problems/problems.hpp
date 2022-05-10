#ifndef __PROBLEMS
#define __PROBLEMS

#include"main.hpp"

enum SubType{
    DYNAMIC_PROGRAMMING,
    TOTAL_SUB_TYPES
};

class ProblemsHelp : public MainHelp{
private:
    SubType getSubType(char *input);
    void printUsage();
public:
    void getSubClass(char *input);
};

#endif