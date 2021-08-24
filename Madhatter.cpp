/******************************************************************************
 * Program Name: Madhatter.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/09/2019
 * Description: This is the source file for the Madhatter derived class. This
 *              class is derived from the Space base class. This class is the
 *              fourth space in the game representing the Madhatter Alice
 *              meets in the forest having a tea party. If she joins the party
 *              then she receives a mysterious key.
 *****************************************************************************/
#include "Madhatter.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * Madhatter::Madhatter()
 * This is the default constructor for the Madhatter class. This default
 * constructor simply sets the member variables to nullptr and the bool member
 * variables to false. 
 *****************************************************************************/
Madhatter::Madhatter()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
   gotKey = false;
}

/******************************************************************************
 * Madhatter::action()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char Madhatter::action()
{
   //Sets the scene when the user first visits
   if(getVisited() == false)
   {
      //Set a new scene
      cout << endl;
      cout << "You lose sight of the white rabbit in the forest, but up ahead you see a light." << endl;
      cout << "In a clearing there is a large table laden with tea and cakes. There sits a Hatter, a March Hare, and a Dormouse." << endl;
      cout << "When you approach they invite you to tea." << endl;
      cout << "Will you join?" << endl;

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
         cout << "You join the tea party. They serve you an English black tea with a bite of cake." << endl;
         cout << "The Hatter pokes you on the nose, \"I've got a riddle for you! Answer correctly and I'll give you a present!\"" << endl;
         cout << "\"What kind of room has no doors or windows?\"" << endl;
         cout << endl;

         cout << "1. A kitchen" << endl;
         cout << "2. A mudroom" << endl;
         cout << "3. A mushroom" << endl;
         cout << "4. A bedroom" << endl;
         cout << "5. A bathroom" << endl;

         std::string choice2;

         cin >> choice2;

         //Validate
         while(isIntRange(choice2, 5, 1) == false)
         {
            cout << "Please choose from 1 - 5." << endl;
            cin >> choice2;
         }

         //Change from string to int
         int choiceInt2 = std::stoi(choice2);

         while(choiceInt2 != 3)
         {
            cout << endl;
            cout << "\"No, no! Wrong! Try again!\"" << endl;
            cout << "\"What kind of room has no doors or windows?\"" << endl;
            cout << endl;

            cout << "1. A kitchen" << endl;
            cout << "2. A mudroom" << endl;
            cout << "3. A mushroom" << endl;
            cout << "4. A bedroom" << endl;
            cout << "5. A bathroom" << endl;

            cin >> choice2;

            //Validate
            while(isIntRange(choice2, 5, 1) == false)
            {
               cout << "Please choose from 1 - 5." << endl;
               cin >> choice2;
            }

            //Change from string to int
            choiceInt2 = std::stoi(choice2);
         }

         if(choiceInt2 == 3)
         {
            cout << endl;
            cout << "\"Correct! Here's your present!\", The Hatter presents you with a small gold key." << endl;
            cout << "\"Pretty cool, hmmm? Happy unbirthday!\"" << endl;
            cout << "You enjoy the party for a while, but eventually grow bored." << endl;
            cout << "To your left is the grassy meadow and to your right is a door in a tree." << endl;
            cout << "Where do you go?" << endl;

            cout << endl;
            setRetrieved(true);

            cout << "1. To the grassy meadow" << endl;
            cout << "2. Through the door in the tree" << endl;

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

            gotKey = true;

            if(choiceInt3 == 1)
            {
               cout << endl;
               cout << "You head towards the grassy meadow" << endl;
               return 'L';
            }

            else
            {
               cout << endl;
               cout << "You go through the door in the tree." << endl;
               return 'R';
            }
         }

      }

      else
      {
         cout << endl;
         cout << "You decide to skip the tea party." << endl;
         cout << "To your left is the grassy meadow and to your right is a door in a tree." << endl;
         cout << "Where do you go?" << endl;

         cout << endl;

         cout << "1. To the grassy meadow" << endl;
         cout << "2. Through the door in the tree" << endl;

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
            cout << "You head towards the grassy meadow" << endl;
            return 'L';
         }

         else
         {
            cout << endl;
            cout << "You go through the door in the tree." << endl;
            return 'R';
         }
      }

   }

   //This section executes if the user has visited before but didn't join the tea party
   else if(getVisited() == true && gotKey == false)
   {
      cout << endl;
      cout << "You've returned to the party. This time they rope you in and force you into a chair." << endl;
      cout << "They serve you a cup of oolong tea and a plate of cookies." << endl; 
      cout << "The Hatter pokes you on the nose, \"I've got a riddle for you! Answer correctly and I'll give you a present!\"" << endl;
      cout << "\"What kind of room has no doors or windows?\"" << endl;
      cout << endl;

      cout << "1. A kitchen" << endl;
      cout << "2. A mudroom" << endl;
      cout << "3. A mushroom" << endl;
      cout << "4. A bedroom" << endl;
      cout << "5. A bathroom" << endl;

      std::string choice5;

      cin >> choice5;

      //Validate
      while(isIntRange(choice5, 5, 1) == false)
      {
         cout << "Please choose from 1 - 5." << endl;
         cin >> choice5;
      } 

      //Change from string to int
      int choiceInt5 = std::stoi(choice5);

      while(choiceInt5 != 3)
      {
         cout << endl;
         cout << "\"No, no! Wrong! Try again!\"" << endl;
         cout << "\"What kind of room has no doors or windows?\"" << endl;
         cout << endl;

         cout << "1. A kitchen" << endl;
         cout << "2. A mudroom" << endl;
         cout << "3. A mushroom" << endl;
         cout << "4. A bedroom" << endl;
         cout << "5. A bathroom" << endl;

         cin >> choice5;

         //Validate
         while(isIntRange(choice5, 5, 1) == false)
         {
            cout << "Please choose from 1 - 5." << endl;
            cin >> choice5;
         }

         //Change from string to int
         choiceInt5 = std::stoi(choice5);
      }

      if(choiceInt5 == 3)
      {
         cout << endl;
         cout << "\"Correct! Here's your present!\", The Hatter presents you with a small gold key." << endl;
         cout << "\"Pretty cool, hmmm? Happy unbirthday!\"" << endl;
         cout << "You enjoy the party for a while, but eventually grow bored." << endl;
         cout << "To your left is the grassy meadow and to your right is a door in a tree." << endl;
         cout << "Where do you go?" << endl;

         cout << endl;
         setRetrieved(true);

         cout << "1. To the grassy meadow" << endl;
         cout << "2. Through the door in the tree" << endl;

         std::string choice6;

         cin >> choice6;

         //Validate
         while(isIntRange(choice6, 2, 1) == false)
         {
            cout << "Please choose 1 or 2." << endl;
            cin >> choice6;
         }

         //Change from string to int
         int choiceInt6 = std::stoi(choice6);

         gotKey = true;

         if(choiceInt6 == 1)
         {
            cout << endl;
            cout << "You head towards the grassy meadow" << endl;
            return 'L';
         }

         else
         {
            cout << endl;
            cout << "You go through the door in the tree." << endl;
            return 'R';
         }
      }   
      
   }

   //This section executes if the user has already visited and participated in the tea party 
   else
   {
      cout << endl;
      cout << "You are back at the tea party clearing. However, the Hatter, the March Hare, and the Dormouse are gone." << endl;
      cout << "All that is left is a messy table, and some overturned chairs. They did not clean up at all..." << endl;
      cout << "To your left is the grassy meadow and to your right is a door in a tree." << endl;
      cout << "Where would you like to go?" << endl;
      cout << endl;

      cout << "1. To the grassy meadow." << endl;
      cout << "2. Through the door in the tree." << endl;

      std::string choice7;

      cin >> choice7;

      //Validate
      while(isIntRange(choice7, 2, 1) == false)
      {
         cout << "Please choose 1 or 2." << endl;
         cin >> choice7;
      } 

      //Change from string to int
      int choiceInt7 = std::stoi(choice7);

      if(choiceInt7 == 1)
      {
         cout << endl;
         cout << "You head towards the grassy meadow" << endl;
         return 'L';
      }

      else
      {
         cout << endl;
         cout << "You go through the door in the tree." << endl;
         return 'R';
      }
   }
}

/******************************************************************************
 * Madhatter::getItem()
 * This is the getItem method for the Madhatter class. This class lets Alice 
 * pick up a key that helps her get home.
 *****************************************************************************/
std::string Madhatter::getItem()
{
   if(gotKey == true)
   {
      return "Key";
   }

   else
   {
      return "none";
   }
}

/******************************************************************************
 * Madhatter::~Madhatter()
 * This is the virtual destructor for the Madhatter class.
 *****************************************************************************/
Madhatter::~Madhatter()
{
   
}
