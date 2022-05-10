#include<cstring>
#include<iostream>

#include"dynamicProgramming.hpp"

DynamicProgrammingQuestionType DynamicProgrammingHelp::getDynamicProgrammingQuestionType(char *input){
    if(!strcmp(input, "Basic") || !strcmp(input, "0"))
        return BASIC;
    if(!strcmp(input, "Intermediate") || !strcmp(input, "1"))
        return INTERMEDIATE;
    if(!strcmp(input, "Hard") || !strcmp(input, "2"))
        return HARD;
    return MAX_DYNAMIC_PROGRAMMING_QUESTION_TYPES;
}

void DynamicProgrammingHelp::printUsage(){
    ProblemsHelp::printUsage();
    std::cout << "DynamicProgrammingQuestionTypes:\n"
              << "0. Basic\n"
              << "1. Intermediate\n"
              << "2. Hard\n";
}

DynamicProgrammingHelp* DynamicProgrammingHelp::getQuestionType(int argc, char *argv[]){
    if(argc > 3){
        DynamicProgrammingQuestionType dynamicProgrammingQuestionType = getDynamicProgrammingQuestionType(argv[3]);
        switch(dynamicProgrammingQuestionType)
        {
            case BASIC:
            case INTERMEDIATE:
            case HARD:
                return 0;
        }
    }
    printUsage();
    return nullptr;
}