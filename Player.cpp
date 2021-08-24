/******************************************************************************
 * Program Name: Player.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the source file for the Player class. This 
 *              class is used to represent the player in the game. This class
 *              contains the vector of items the player has collected. 
 *****************************************************************************/
#include "Player.hpp"

/******************************************************************************
 * Player::Player()
 * This is the default constructor for the Player class. This default
 * constructor simply sets the member variable numItems to 0.
 *****************************************************************************/
Player::Player()
{
   numItems = 0;
}

/******************************************************************************
 * Player::addItem(string)
 * This is the addItem method. This method adds an item to the vector and 
 * increments the numItems member variable up by 1. This function takes a 
 * string argument and returns nothing. 
 *****************************************************************************/
void Player::addItem(std::string newItem)
{
   if(isFull() != true)
   {
      //Add item to vector
      inventory.push_back(newItem);

      //Increase the size of the inventory.
      numItems++;
   }
}

/******************************************************************************
 * Player::findItem(string)
 * This is the findItem method. This method determines if the item entered as 
 * an argument is in the inventory. If not, it returns false. If the item is 
 * located, then it returns true. This method takes a string argument and 
 * returns a bool.
 *****************************************************************************/
bool Player::findItem(std::string myItem)
{
   //Default bool is false
   bool found = false;

   //Get the size of the inventory
   int size = inventory.size();

   //Use a for loop to go through the vector
   for(int i = 0; i < size; i++)
   {
      if(myItem == inventory[i])
      {
         //If the item is in the inventory change found to true.
         found = true;
      }
   }
   return found;
}

/******************************************************************************
 * Player::isFull()
 * This is the isFull method. This method determines if the inventory is full
 * or not. The inventory can hold a max of 10 items (which is much more space
 * than necessary for the game). This method returns a bool, false if the 
 * inventory still has room and true if the inventory is full. This method 
 * takes no arguments. 
 *****************************************************************************/
bool Player::isFull()
{
   //Get the size of the inventory
   int size = inventory.size();

   //If full then return true, else return false.
   if(size >= 10)
   {
      return true;
   }

   else
   {
      return false;
   }
}

/******************************************************************************
 * Player::~Player()
 * This is the destructor for the Player class. 
 *****************************************************************************/
Player::~Player()
{

}