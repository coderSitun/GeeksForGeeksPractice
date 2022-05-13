#ifndef __BASIC_DYNAMIC_PROGRAMMING
#define __BASIC_DYNAMIC_PROGRAMMING

#include<vector>
#include<string>

#include"dynamicProgramming.hpp"

#define MAX_BASIC_DYNAMIC_PROGRAMMING_PROBLEMS 50

class BasicDynamicProgrammingHelp : public DynamicProgrammingHelp {
private:
    static std::vector<std::string> fileNames;
    static void (*executeQuestion[MAX_BASIC_DYNAMIC_PROGRAMMING_PROBLEMS])();
    static void defaultQuestionExecution();
    unsigned int questionIndex;
    BasicDynamicProgrammingHelp(unsigned int questionNum);
protected:
    static void printUsage();
public:
    static void initialize();
    static BasicDynamicProgrammingHelp* getQuestionObject(int argc, char *argv[]);
    void execute();
};

#endif