/**
 * @file main.cpp
 * @author Rahul Kaplesh
 * @brief Mian file for launching the hacker application
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "utility.hpp"
#include "CommandLineParser.hpp"

/**
 * @brief main function for hacker app
 * 
 * @param argc number of command line arguments
 * @param argv actual command line argument
 * @return int return value indicating status of the app
 */
int main(int argc, char *argv[])
{
    CommandLineParser Parser(argc, argv);
    if (Parser.commandOptionExists("-h"))
    {
        std::cout << "Printing help" << std::endl;
    }    
    return 0;
}
