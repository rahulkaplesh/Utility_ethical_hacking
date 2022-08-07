/**
 * @file utility.hpp
 * @author rahulkaplesh
 * @brief utility classes and macros used accross the code
 * @version 0.1
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef HACKER_UTILITY_HPP_
#define HACKER_UTILITY_HPP_

#include <iostream>

/**
 * @brief DEBUG_STDOUT : stdout which outputs in case of DEBUG Macro definition
 *        DEBUG_ERROR : stderr which outputs in case of DEBUG Macro definition
 */
#ifdef DEBUG
    #define DEBUG_STDOUT(x) (std::cout << "[" << __FILE__ << "][" << __FUNCTION__ << "][Line " << __LINE__ << "] " << (x) << std::endl)
    #define DEBUG_STDERR(x) (std::cerr << "[" << __FILE__ << "][" << __FUNCTION__ << "][Line " << __LINE__ << "] " << (x) << std::endl)
#else
    #define DEBUG_STDOUT(x)
    #define DEBUG_STDERR(x) (std::cerr << "[" << __FILE__ << "][" << __FUNCTION__ << "][Line " << __LINE__ << "] " << (x) << std::endl)
#endif

#endif //HACKER_UTILITY_HPP_