/******************************************************************************
 * Program Name: RabbitHole.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the header file for the RabbitHole class. This is a 
 *              derived class of the Space class. This represents the 
 *              beginning of the game. 
 *****************************************************************************/
#ifndef RABBITHOLE_HPP
#define RABBITHOLE_HPP

#include "Space.hpp"

class RabbitHole:public Space
{
   private:

   public:
      RabbitHole();

      virtual char action();
      virtual std::string getItem();

      ~RabbitHole();
};

#endif