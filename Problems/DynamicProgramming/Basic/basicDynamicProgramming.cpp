#include<iostream>

#include"basicDynamicProgramming.hpp"

BasicDynamicProgrammingHelp::BasicDynamicProgrammingHelp(unsigned int questionNum){
    questionIndex = questionNum - 1;
}

void BasicDynamicProgrammingHelp::defaultQuestionExecution(){
    std::cout << "No question to execute. Exiting..." << std::endl;
}

void BasicDynamicProgrammingHelp::printUsage(){
    DynamicProgrammingHelp::printUsage();
    std::cout << "QuestionNum <= " << MAX_BASIC_DYNAMIC_PROGRAMMING_PROBLEMS << std::endl;
}

void BasicDynamicProgrammingHelp::initialize(){
    for(int i = 0; i < MAX_BASIC_DYNAMIC_PROGRAMMING_PROBLEMS; ++i){
        executeQuestion[i] = defaultQuestionExecution;
    }
}

BasicDynamicProgrammingHelp* BasicDynamicProgrammingHelp::getQuestionObject(int argc, char *argv[]){
    if(argc > 4){
        int questionNum = atoi(argv[4]);
        if(questionNum <= MAX_BASIC_DYNAMIC_PROGRAMMING_PROBLEMS)
            return new BasicDynamicProgrammingHelp(questionNum);
    }
    printUsage();
    return nullptr;
}