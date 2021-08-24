/**************************************************************************************
 * Program Name: isIntRange.hpp - Fantasy Combat Tournament (Project 4)
 * Author: Victoria Dmyterko
 * Date: 5/16/2019
 * Description: This is the header file for the isInt function. This function accepts
 *              a string as an argument, then parses through the string to check that
 *              the input is only made up of digits. If there is a non-digit in the
 *              string then it returns false. If the string is only made up of digits
 *              throughout then it returns true. It also accepts two ints so that it
 *              can determine if the integer passed is within range.
 *************************************************************************************/
#ifndef ISINTRANGE_HPP
#define ISINTRANGE_HPP

#include <string>

//This function parses through a string to check that the input is only made up of 
//digits, it then returns a bool to the calling program. Returns false if there is a 
//non-digit in the string.
bool isIntRange(std::string number, int topRange, int lowRange);

#endif
