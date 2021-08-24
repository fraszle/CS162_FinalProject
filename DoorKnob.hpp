/******************************************************************************
 * Program Name: DoorKnob.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/08/2019
 * Description: This is the header file for the DoorKnob class. This is a 
 *              derived class of the Space class. This represents the second 
 *              space of the game.
 *****************************************************************************/
#ifndef DOORKNOB_HPP
#define DOORKNOB_HPP

#include "Space.hpp"

class DoorKnob:public Space
{
   private:
      bool doorOpened;

   public:
      DoorKnob();

      virtual char action();
      virtual std::string getItem();

      ~DoorKnob();
};

#endif