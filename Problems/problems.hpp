#ifndef __PROBLEMS
#define __PROBLEMS

#include"main.hpp"

enum ProblemType{
    DYNAMIC_PROGRAMMING,
    TOTAL_SUB_TYPES
};

class ProblemsHelp : public MainHelp{
private:
    ProblemType getProblemType(char *input);
    void printUsage();
public:
    void getSubClass(char *input);
    void workOut(char *input1);
    void workOut(char *input1, char *input2);
};

#endif