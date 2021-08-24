/******************************************************************************
 * Program Name: Hut.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/10/2019
 * Description: This is the header file for the Hut class. This is a 
 *              derived class of the Space class. This represents the sixth 
 *              space of the game.
 *****************************************************************************/
#ifndef HUT_HPP
#define HUT_HPP

#include "Space.hpp"

class Hut:public Space
{
   private:
      bool riddleAns;

   public:
      Hut();

      virtual char action();
      virtual std::string getItem();

      ~Hut();
};

#endif