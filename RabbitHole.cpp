/******************************************************************************
 * Program Name: RabbitHole.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the source file for the RabbitHole derived class. This
 *              class is derived from the Space base class. This class is the
 *              beginning of the game representing the rabbit hole that Alice 
 *              must fall into. 
 *****************************************************************************/
#include "RabbitHole.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * RabbitHole::RabbitHole()
 * This is the default constructor for the RabbitHole class. This default
 * constructor simply sets the member variables to nullptr and the bool member
 * variable to false. 
 *****************************************************************************/
RabbitHole::RabbitHole()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
   setRetrieved(false);
}

/******************************************************************************
 * RabbitHole::acion()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char RabbitHole::action()
{
   //Sets the scene for when the user first visits
   if(getVisited() == false)
   {  
      //Set the scene
      cout << "You are by a lovely riverbank, the water slowly swirls by." << endl;
      cout << "Suddenly, a white rabbit in a waistcoat dashes by shouting \"I'm late! I'm late! For a very important date!\"" << endl;
      cout << "He disappears down a large rabbit hole! Do you follow?" << endl;

      cout << endl;

      //Present choices to the user
      cout << "1. Yes" << endl;
      cout << "2. No" << endl;

      std::string numStr;

      cin >> numStr;

      //Validate
      while(isIntRange(numStr, 2, 1) == false)
      {
         cout << "Please choose 1 for Yes or 2 for No." << endl;
         cin >> numStr;
      }

      //Change input type to integer
      int num = std::stoi(numStr);

      while(num == 2)
      {
         cout << endl;
         cout << "You decide to not follow the rabbit. The riverbank is very beautiful. You sit there a while. " << endl;
         cout << "After an hour you get a bit bored and glance at the rabbit hole. Should you go in?" << endl;
      
         cout << endl;

         //Present choices to the user
         cout << "1. Yes" << endl;
         cout << "2. No" << endl;

         cin >> numStr;

         //Validate
         while(isIntRange(numStr, 2, 1) == false)
         {
            cout << "Please choose 1 for Yes or 2 for No." << endl;
            cin >> numStr;
         }

         //Change input type to integer
         num = std::stoi(numStr);
      }

      if(num == 1)
      {
         cout << endl;
         cout << "Your curiosity gets the better of you and you follow the rabbit into the hole." << endl;
         cout << "After crawling for a little while the rabbit hole suddenly turns vertical and you fall!" << endl;
         cout << endl;
         return 'R';
      }
   }

   //This section executes if the user returns to this space
   else
   {
      cout << endl;
      cout << "You've returned to the river bank where you started after crawling back up the rabbit hole." << endl;
      cout << "There's nowhere to go, you are unsure how to get home from here." << endl;
      cout << "Go back down the hole?" << endl;

      cout << endl;

      cout << "1. Yes" << endl;
      cout << "2. No" << endl;

      std::string numTwo;

      cin >> numTwo;

      //Validate
      while(isIntRange(numTwo, 2, 1) == false)
      {
         cout << "Please choose 1 for Yes or 2 for No." << endl;
         cin >> numTwo;
      }

      //Change input type to integer
      int num2 = std::stoi(numTwo);

      while(num2 == 2)
      {
         cout << endl;
         cout << "You decide to not go back down the hole. The riverbank is very beautiful. You sit there a while. " << endl;
         cout << "After an hour you get worried you'll never get home. You glance at the rabbit hole. Should you go back in?" << endl;
      
         cout << endl;

         //Present choices to the user
         cout << "1. Yes" << endl;
         cout << "2. No" << endl;

         cin >> numTwo;

         //Validate
         while(isIntRange(numTwo, 2, 1) == false)
         {
            cout << "Please choose 1 for Yes or 2 for No." << endl;
            cin >> numTwo;
         }

         //Change input type to integer
         num2 = std::stoi(numTwo);
      }

      if(num2 == 1)
      {
         cout << endl;
         cout << "Back down you go!" << endl;
         return 'R';
      }
   }
}

/******************************************************************************
 * RabbitHole::getItem()
 * This is the getItem method for the RabbitHole class. This class doesn't 
 * need an item so this method returns "none" to the calling program.
 *****************************************************************************/
std::string RabbitHole::getItem()
{
   return "none";
}

/******************************************************************************
 * RabbitHole::~RabbitHole()
 * This is the virtual destructor for the RabbitHole class.
 *****************************************************************************/
RabbitHole::~RabbitHole()
{
   
}
