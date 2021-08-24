/******************************************************************************
 * Program Name: Space.hpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the header file for the abstract Space class. This 
 *              class is used to represent the spaces that the player can move
 *              to in the game. This class is used to create the derived 
 *              classes that the player will interact with. This header gives
 *              the prototype of the class. 
 *****************************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>
#include "Player.hpp"

class Space
{
   private:
      Space *up = nullptr;
      Space *down = nullptr;
      Space *left;
      Space *right;

      bool visited;
      bool itemRetrieved;

   protected:
      Player *Alice;

   public:
      Space();

      Space* getLeft();
      Space* getRight();

      void setLeft(Space*);
      void setRight(Space*);

      virtual char action() = 0;
      virtual std::string getItem() = 0;

      void setVisited(bool change);
      bool getVisited();

      void setRetrieved(bool confirm);
      bool getRetrieved();

      void setPlayer(Player*);

      virtual ~Space();
};

#endif