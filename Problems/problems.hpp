#ifndef __PROBLEMS
#define __PROBLEMS

#include"main.hpp"

enum ProblemType{
    DYNAMIC_PROGRAMMING,
    TOTAL_SUB_TYPES
};

class ProblemsHelp : public MainHelp{
private:
    static ProblemType getProblemType(char *input);
protected:
    static void printUsage();
public:
    static ProblemsHelp* getSubClass(int argc, char *argv[]);
};

#endif