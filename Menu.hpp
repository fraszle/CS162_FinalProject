/******************************************************************************
 * Program Name: Menu.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the header file for the Menu class. This 
 *              class is used to help run the game. 
 *****************************************************************************/
#ifndef MENU_HPP
#define MENU_HPP

#include "Caterpillar.hpp"
#include "DoorKnob.hpp"
#include "Space.hpp"
#include "Hut.hpp"
#include "Madhatter.hpp"
#include "Player.hpp"
#include "RabbitHole.hpp"
#include "Queen.hpp"
#include "isIntRange.hpp"

class Menu
{
   private:
      Space *location;
      Space *rabbit;
      Space *doorKnob;
      Space *caterpillar;
      Space *madhatter;
      Space *queen;
      Space *hut;

      Player *Alice;

      int numSteps;

      bool winGame;

   public:
      Menu();

      void intro();

      void playGame();

      ~Menu();
};

#endif