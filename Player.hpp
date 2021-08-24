/******************************************************************************
 * Program Name: Player.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the header file for the Player class. This 
 *              class is used to represent the player in the game. This class
 *              contains the vector of items the player has collected. 
 *****************************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include <string>

class Player
{
   private:
      int numItems;
      std::vector<std::string> inventory;

   public:
      Player();

      void addItem(std::string);
      bool findItem(std::string);
      void clrInventory();
      bool isFull();  

      ~Player();
};

#endif