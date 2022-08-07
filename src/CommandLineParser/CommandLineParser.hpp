/**
 * @file CommandLineParser.hpp
 * @author rahulkaplesh
 * @brief Command line parser for the hacker utility
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef COMMAND_LINE_PARSER_HPP_
#define COMMAND_LINE_PARSER_HPP_

#include <string>
#include <vector>

/**
 * @brief Command Line Parser Class
 * 
 */
class CommandLineParser 
{
    public:
        /**
         * @brief Construct a new Command Line Parser object
         * 
         * @param argc number of command line arguments
         * @param argv character array of command line arguments
         */
        CommandLineParser(int &argc, char** argv);

        /**
         * @brief Get the Command Option object
         * 
         * @param option option to get the associated value
         * @return const std::string& value string
         */
        const std::string& getCommandOption(const std::string &option) const;

        /**
         * @brief Function to check if a command line option exists
         * 
         * @param option command line option to check
         * @return true 
         * @return false 
         */
        bool commandOptionExists(const std::string &option) const;

    private:
        std::vector<std::string> tokens;
};

#endif // COMMAND_LINE_PARSER_HPP_