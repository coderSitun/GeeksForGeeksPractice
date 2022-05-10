#ifndef __DYNAMIC_PROGRAMMING
#define __DYNAMIC_PROGRAMMING

#include"problems.hpp"

enum DynamicProgrammingQuestionType{
    BASIC,
    INTERMEDIATE,
    HARD,
    MAX_DYNAMIC_PROGRAMMING_QUESTION_TYPES
};

class DynamicProgrammingHelp : public ProblemsHelp{
private:
    static DynamicProgrammingQuestionType getDynamicProgrammingQuestionType(char *input);
protected:
    static void printUsage();
public:
    static DynamicProgrammingHelp* getQuestionType(int argc, char *argv[]);
};

#endif