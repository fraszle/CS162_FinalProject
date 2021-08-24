/******************************************************************************
 * Program Name: Space.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the source file for the abstract Space class. This 
 *              class is used to represent the spaces that the player can move
 *              to in the game. This class is used to create the derived 
 *              classes that the player will interact with. 
 *****************************************************************************/
#include "Space.hpp"

/******************************************************************************
 * Space::Space()
 * This is the default constructor for the Space class. This default
 * constructor simply sets the member variables to nullptr. 
 *****************************************************************************/
Space::Space()
{
   setLeft(nullptr);
   setRight(nullptr);
   itemRetrieved = false;
}

//These are the get methods for the left and right member pointers.
Space* Space::getLeft()
{
   return left;
}

Space* Space::getRight()
{
   return right;
}

//These are the set methods for the left and right member pointers. 
void Space::setLeft(Space* leftIn)
{
   left = leftIn;
}
void Space::setRight(Space* rightIn)
{
   right = rightIn;
}

//Get and set method for visited member variable
void Space::setVisited(bool change)
{
   visited = change;
}

bool Space::getVisited()
{
   return visited;
}

//Get and set method for itemRetrieved member variable
void Space::setRetrieved(bool confirm)
{
   itemRetrieved = confirm;
}
      
bool Space::getRetrieved()
{
   return itemRetrieved;
}

//Set method for Player member variable
void Space::setPlayer(Player* playerIn)
{
   Alice = playerIn;
}

/******************************************************************************
 * Space::~Space()
 * This is the virtual destructor for the space class. This is declared virtual
 * so that derived classes will be destroyed correctly. 
 *****************************************************************************/
Space::~Space()
{
   
}