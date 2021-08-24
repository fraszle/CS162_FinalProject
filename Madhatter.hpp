/******************************************************************************
 * Program Name: Madhatter.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/09/2019
 * Description: This is the header file for the Madhatter class. This is a 
 *              derived class of the Space class. This represents the fourth 
 *              space of the game.
 *****************************************************************************/
#ifndef MADHATTER_HPP
#define MADHATTER_HPP

#include "Space.hpp"

class Madhatter:public Space
{
   private:
      bool gotKey;

   public:
      Madhatter();

      virtual char action();
      virtual std::string getItem();

      ~Madhatter();
};

#endif