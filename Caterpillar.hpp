/******************************************************************************
 * Program Name: Caterpillar.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/08/2019
 * Description: This is the header file for the Caterpillar class. This is a 
 *              derived class of the Space class. This represents the third 
 *              space of the game.
 *****************************************************************************/
#ifndef CATERPILLAR_HPP
#define CATERPILLAR_HPP

#include "Space.hpp"

class Caterpillar:public Space
{
   private:
      bool regSize;

   public:
      Caterpillar();

      virtual char action();
      virtual std::string getItem();

      ~Caterpillar();
};

#endif