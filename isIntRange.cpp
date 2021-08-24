/**************************************************************************************
 * Program Name: isIntRange.cpp - Fantasy Combat Tournament (Project 4)
 * Author: Victoria Dmyterko
 * Date: 5/16/2019
 * Description: This is the source code for the isIntRange function. This function 
 *              accepts a string, then parses through the string using the isdigit 
 *              function to check that the entire string is only composed of digits. 
 *              If it encounters something other than a digit, then the function will 
 *              return false. Otherwise, it returns true to the calling program. It 
 *              also accepts two ints so that it can determine if the integer passed is 
 *              within range.
 *************************************************************************************/
#include "isIntRange.hpp"
#include <string>
#include <cctype>

//This function is adapted from https://codereview.stackexchange.com

bool isIntRange(std::string number, int topRange, int lowRange)
{
   int inputInt;

   //Use a for loop to iterate over each character in the string.
   for(int i = 0; i < number.size(); i++)
   {
     
      //Use the isdigit function to check if the character is a digit. Return false if
      //it is not.
      if(!std::isdigit(number[i]))
      {
         return false;
      }
   }
   
   //Change the input to an integer using stoi.
   inputInt = std::stoi(number);

   //Check if the integer is within range.
   if(inputInt > topRange || inputInt < lowRange)
   {
      return false;
   } 

   //Return true if the entire string is only made up of digits.
   //And it is within range.
   else
   {
      return true;
   }
}
