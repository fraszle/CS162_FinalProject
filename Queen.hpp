/******************************************************************************
 * Program Name: Queen.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/09/2019
 * Description: This is the header file for the Queen class. This is a 
 *              derived class of the Space class. This represents the fifth 
 *              space of the game.
 *****************************************************************************/
#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "Space.hpp"

class Queen:public Space
{
   private:

   public:
      Queen();

      virtual char action();
      virtual std::string getItem();

      ~Queen();
};

#endif
