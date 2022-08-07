/**
 * @file CommandLineParser.cpp
 * @author rahulkaplesh (you@domain.com)
 * @brief implementation of cmmand line parser
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <algorithm>

#include "CommandLineParser.hpp"

CommandLineParser::CommandLineParser(int &argc, char **argv)
{
    for (int i=1; i < argc; ++i)
    {
        this->tokens.push_back(std::string(argv[i]));
    }
}

const std::string& CommandLineParser::getCommandOption(const std::string &option) const{
    std::vector<std::string>::const_iterator itr;
    itr =  std::find(this->tokens.begin(), this->tokens.end(), option);
    if (itr != this->tokens.end() && ++itr != this->tokens.end()){
        return *itr;
    }
    static const std::string empty_string("");
    return empty_string;
}

bool CommandLineParser::commandOptionExists(const std::string &option) const{
    return std::find(this->tokens.begin(), this->tokens.end(), option)
           != this->tokens.end();
}