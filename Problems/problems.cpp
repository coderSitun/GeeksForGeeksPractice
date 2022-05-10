#include<cstring>
#include<iostream>

#include"problems.hpp"
#include"dynamicProgramming.hpp"

ProblemType ProblemsHelp::getProblemType(char *input){
    if(!strcmp(input, "DynamicProgramming") || !strcmp(input, "0"))
        return DYNAMIC_PROGRAMMING;
    return TOTAL_SUB_TYPES;
}

void ProblemsHelp::printUsage(){
    MainHelp::printUsage();
    std::cout << "Problem Types:\n"
              << "0. DynamicProgramming\n";
}

ProblemsHelp* ProblemsHelp::getSubClass(int argc, char *argv[]){
    if(argc > 2){
        ProblemType problemType = getProblemType(argv[2]);
        switch(problemType)
        {
            case DYNAMIC_PROGRAMMING:
                return DynamicProgrammingHelp::getQuestionType(argc, argv);
        }
    }
    printUsage();
    return nullptr;
}