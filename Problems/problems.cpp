#include<cstring>
#include<iostream>

#include"problems.hpp"

SubType ProblemsHelp::getSubType(char *input){
    if(!strcmp(input, "DynamicProgramming") || !strcmp(input, "0"))
        return DYNAMIC_PROGRAMMING;
    return TOTAL_SUB_TYPES;
}

void ProblemsHelp::printUsage(){
    MainHelp::printUsage();
    std::cout << "Problem Types:\n"
              << "0. DynamicProgramming\n";
}