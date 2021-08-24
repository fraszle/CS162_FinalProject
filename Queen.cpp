/******************************************************************************
 * Program Name: Queen.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/09/2019
 * Description: This is the source file for the Queen derived class. This
 *              class is derived from the Space base class. This class is the
 *              fifth space in the game representing the Queen of Hearts that 
 *              Alice meets and plays croquet with. 
 *****************************************************************************/
#include "Queen.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * Queen::Queen()
 * This is the default constructor for the Queen class. This default
 * constructor simply sets the member variables to nullptr.
 *****************************************************************************/
Queen::Queen()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
}

/******************************************************************************
 * Queen::action()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char Queen::action()
{
   //Sets the scene when the character first visits
   if(getVisited() == false)
   {
      //Set the scene
      cout << endl;
      cout << "The door in the tree leads to a long hallway. The end of the hallway opens up to a large lawn with grand hedges." << endl;
      cout << "To your left is the hallway you just emerged from and to your right in the distance is a small hut." << endl;
      cout << "In the middle of the lawn is a large women in a black, red, and white dress. She is yelling at some card guards." << endl;
      cout << "She catches sight of you, \"Who are you trespassing in my garden?!\"" << endl;
      cout << "\"A-alice ma'am.\", you reply." << endl;
      cout << "She smiles coldly, \"Alice, would you like to play a game of croquet?\"" << endl;
      cout << "What is your reply?" << endl;
      cout << endl;

      cout << "1. Yes" << endl;
      cout << "2. No" << endl;

      std::string choice1;

      cin >> choice1;

      //Validate
      while(isIntRange(choice1, 2, 1) == false)
      {
         cout << "Please choose 1 or 2." << endl;
         cin >> choice1;
      }

      //Change from string to int
      int choiceInt1 = std::stoi(choice1);

      if(choiceInt1 == 1)
      {
         cout << endl;
         cout << "\"Oh, grand!\" she replies, but it doesn't sound friendly." << endl;
         cout << "A croquet match ensues but instead of mallets you use flamingos." << endl; 
         cout << "The queen is awful at the game, but her card guards help her cheat!" << endl;
         cout << "Regardless, you manage to win by just a few points. The queen is enraged." << endl;
         cout << "\"Cheat! Cheat! How dare you defy me! OFF WITH HER HEAD!\", the Queen of Hearts bellows." << endl;
         cout << "Uh oh! Time to run! Which way do you go?" << endl;

         cout << endl;

         cout << "1. Back through the hallway" << endl;
         cout << "2. Towards the small hut" << endl;

         std::string choice2;

         cin >> choice2;

         //Validate
         while(isIntRange(choice2, 2, 1) == false)
         {
            cout << "Please choose 1 or 2." << endl;
            cin >> choice2;
         }

         //Change from string to int
         int choiceInt2 = std::stoi(choice2);

         if(choiceInt2 == 1)
         {
            cout << endl;
            cout << "You run back the way you came through the long hallway!" << endl;
            cout << "Somehow, you lose the card guards along the way." << endl;
            return 'L';
         }

         else
         {
            cout << endl;
            cout << "You run towards the hut in the distance." << endl;
            cout << "Perhaps whoever lives there can help you find your way home." << endl;
            return 'R';
         }
      }

      else
      {
         cout << endl;
         cout << "\"Y-you dare to turn down the Queen of Hearts?!?!\", the queen screeches her face turning bright red." << endl;
         cout << "\"OFF WITH HER HEAD!\", she bellows. The card guards jump to attention and slowly close in on you." << endl;
         cout << "Uh oh! Time to run! Which way do you go?" << endl;

         cout << endl;
         cout << "1. Back through the hallway" << endl;
         cout << "2. Towards the small hut" << endl;

         std::string choice3;
         
         cin >> choice3;

         //Validate
         while(isIntRange(choice3, 2, 1) == false)
         {
            cout << "Please choose 1 or 2." << endl;
            cin >> choice3;
         }

         //Change from string to int
         int choiceInt3 = std::stoi(choice3);

         if(choiceInt3 == 1)
         {
            cout << endl;
            cout << "You run back the way you came through the long hallway!" << endl;
            cout << "Somehow, you lose the card guards along the way." << endl;
            return 'L';
         }

         else
         {
            cout << endl;
            cout << "You run towards the hut in the distance." << endl;
            cout << "Perhaps whoever lives there can help you find your way home." << endl;
            return 'R';
         }
      }
   }

   //This executes if the player returns to this space
   else
   {
      cout << endl;
      cout << "You've returned to the queen's lawns and garden, however, this time there is no one around." << endl;
      cout << "There doesn't seem to be anything to do around here." << endl;
      cout << "To your left is the hallway and to your right in the distance is the small hut." << endl;
      cout << "Where would you like to go?" << endl;
      cout << endl;

      cout << "1. Through the hallway" << endl;
      cout << "2. Towards the small hut" << endl;

      std::string choice4;

      cin >> choice4;

      //Validate
      while(isIntRange(choice4, 2, 1) == false)
      {
         cout << "Please choose 1 or 2." << endl;
         cin >> choice4;
      }

      //Change from string to int
      int choiceInt4 = std::stoi(choice4);

      if(choiceInt4 == 1)
      {
         cout << endl;
         cout << "You travel back through the long hallway." << endl;
         return 'L';
      }
      
      else
      {
         cout << endl;
         cout << "You trek to the small hut." << endl;
         return 'R';
      }
   }
}

/******************************************************************************
 * Queen::getItem()
 * This is the getItem method for the Queen class. This class doesn't have an
 * item to give Alice, so it returns "none".
 *****************************************************************************/
std::string Queen::getItem()
{
   return "none";
}

/******************************************************************************
 * Queen::~Queen()
 * This is the virtual destructor for the Queen class.
 *****************************************************************************/
Queen::~Queen()
{
   
}
