/******************************************************************************
 * Program Name: Hut.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/09/2019
 * Description: This is the source file for the Hut derived class. This
 *              class is derived from the Space base class. This class is the
 *              sixth space in the game representing the end of the game if the
 *              user has the golden key.
 *****************************************************************************/
#include "Hut.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * Hut::Hut()
 * This is the default constructor for the Hut class. This default
 * constructor simply sets the member variables to nullptr and the bool member
 * variables to false. 
 *****************************************************************************/
Hut::Hut()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
   riddleAns = false;
}

/******************************************************************************
 * Hut::action()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char Hut::action()
{
   //Sets the scene on the first visit
   if(getVisited() == false && riddleAns == false)
   {
      cout << endl;
      cout << "You reach the hut and go inside." << endl;
      cout << "Inside is the white rabbit. He seems to be waiting for you." << endl;
      cout << "He stands in front of a golden door. He says nothing." << endl;
      cout << "On your left is the door back to the queen's gardens, the white rabbit is on your right." << endl;
      cout << "What do you want to do?" << endl;
      cout << endl;

      cout << "1. Leave the hut and head towards the queen's garden" << endl;
      cout << "2. Approach the white rabbit" << endl;

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
         cout << "You ignore the white rabbit and head back towards the queen's garden." << endl;
         return 'L';
      }

      else
      {
         cout << endl;
         cout << "You approach the white rabbit. \"Hello, would you happen to know how I can get home?\", you ask them." << endl;
         cout << "\"I do! But first you must answer my riddle.\" The rabbit replies." << endl;
         cout << "\"Often will I spin a tale, never will I charge a fee. I'll entertain you an entire eve, but alas, you won't remember me. What am I?\"" << endl;
         cout << "What is your answer?" << endl;

         cout << endl;

         cout << "1. A map" << endl;
         cout << "2. A dream" << endl;
         cout << "3. A book" << endl;
         cout << "4. A musician" << endl;

         std::string choice2;

         cin >> choice2;

         //Validate
         while(isIntRange(choice2, 4, 1) == false)
         {
            cout << "Please choose from 1 - 4." << endl;
            cin >> choice2;
         }

         //Change from string to int
         int choiceInt2 = std::stoi(choice2);

         while(choiceInt2 != 2)
         {
            cout << endl;
            cout << "\"Incorrect! Give it another go.\", the rabbit looks a bit impatient and checks his pocketwatch." << endl;

            cout << endl;

            cout << "1. A map" << endl;
            cout << "2. A dream" << endl;
            cout << "3. A book" << endl;
            cout << "4. A musician" << endl;

            cin >> choice2;

            //Validate
            while(isIntRange(choice2, 4, 1) == false)
            {
               cout << "Please choose from 1 - 4" << endl;
               cin >> choice2;
            }

            //Change from string to int
            choiceInt2 = std::stoi(choice2);            
         }

         if(choiceInt2 == 2)
         {
            cout << endl;
            cout <<"\"Yes, yes! Very good! The door is all yours!\" the rabbit exclaims, hopping aside." << endl;
            cout << "The door is in front of you. You try the handle, it is locked." << endl;

            riddleAns = true;

            if(Alice->findItem("Key") == true)
            {
               cout << endl;
               cout << "You remember the key you received from the Hatter. It fits into the lock on the door handle perfectly!" << endl;
               cout << "A breeze comes through the open door, but you can't see anything, it is simply darkness." << endl;
               cout << "Is this it? The path home?" << endl;
               cout << "You look back at the white rabbit who gives you a bow farewell." << endl;
               cout << "You step through the doorway." << endl;
               return 'X';
            }

            else
            {
               cout << endl;
               cout << "The door is locked, you don't have a key." << endl;
               cout << "You look at the rabbit who shrugs." << endl;
               cout << "Guess you have to go find a key. You head back towards the queen's garden." << endl;
               return 'L';
            }
         }

      }
   }

   //This section executes if the user has visited the room but hasn't answered the riddle yet
   else if(getVisited() == true && riddleAns == false)
   {
      cout << endl;
      cout << "You've returned to the hut." << endl;
      cout << "To your left is the door and path to the queen's garden. To your right is the white rabbit in front of a golden door." << endl;
      cout << "What do you do?" << endl;
      cout << endl;
      
      cout << "1. Leave the hut and head towards the queen's garden" << endl;
      cout << "2. Approach the white rabbit" << endl;

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
         cout << "You ignore the white rabbit and head back towards the queen's garden." << endl;
         return 'L';
      }

      else
      {
         cout << endl;
         cout << "You approach the white rabbit. \"Hello, would you happen to know how I can get home?\", you ask them." << endl;
         cout << "\"I do! But first you must answer my riddle.\" The rabbit replies." << endl;
         cout << "\"Often will I spin a tale, never will I charge a fee. I'll entertain you an entire eve, but alas, you won't remember me. What am I?\"" << endl;
         cout << "What is your answer?" << endl;

         cout << endl;

         cout << "1. A map" << endl;
         cout << "2. A dream" << endl;
         cout << "3. A book" << endl;
         cout << "4. A musician" << endl;

         std::string choice4;

         cin >> choice4;

         //Validate
         while(isIntRange(choice4, 4, 1) == false)
         {
            cout << "Please choose from 1 - 4." << endl;
            cin >> choice4;
         }

         //Change from string to int
         int choiceInt4 = std::stoi(choice4);

         while(choiceInt4 != 2)
         {
            cout << endl;
            cout << "\"Incorrect! Give it another go.\", the rabbit looks a bit impatient and checks his pocketwatch." << endl;

            cout << endl;

            cout << "1. A map" << endl;
            cout << "2. A dream" << endl;
            cout << "3. A book" << endl;
            cout << "4. A musician" << endl;

            cin >> choice4;

            //Validate
            while(isIntRange(choice4, 4, 1) == false)
            {
               cout << "Please choose from 1 - 4" << endl;
               cin >> choice4;
            }

            //Change from string to int
            choiceInt4 = std::stoi(choice4);            
         }

         if(choiceInt4 == 2)
         {
            cout << endl;
            cout <<"\"Yes, yes! Very good! The door is all yours!\" the rabbit exclaims, hopping aside." << endl;
            cout << "The door is in front of you. You try the handle, it is locked." << endl;

            riddleAns = true;

            if(Alice->findItem("Key") == true)
            {
               cout << endl;
               cout << "You remember the key you received from the Hatter. It fits into the lock on the door handle perfectly!" << endl;
               cout << "A breeze comes through the open door, but you can't see anything, it is simply darkness." << endl;
               cout << "Is this it? The path home?" << endl;
               cout << "You look back at the white rabbit who gives you a bow farewell." << endl;
               cout << "You step through the doorway." << endl;
               return 'X';
            }

            else
            {
               cout << endl;
               cout << "The door is locked, you don't have a key." << endl;
               cout << "You look at the rabbit who shrugs." << endl;
               cout << "Guess you have to go find a key. You head back towards the queen's garden." << endl;
               return 'L';
            }
         }
      }
   }

   //This section executes if the user has visited the room and answered the riddle but didn't have the key to open the door.
   else
   {
      cout << endl;
      cout << "You've returned to the hut. You step inside." << endl;
      cout << "The white rabbit is sitting at the table drinking a cup of tea. The golden door waits to your right, unguarded." << endl;
      cout << "You try the door handle, it is still locked." << endl;

      if(Alice->findItem("Key") == true)
      {
         cout << endl;
         cout << "You remember the key you received from the Hatter. It fits into the lock on the door handle perfectly!" << endl;
         cout << "A breeze comes through the open door, but you can't see anything, it is simply darkness." << endl;
         cout << "Is this it? The path home?" << endl;
         cout << "You look back at the white rabbit who gives you a bow farewell." << endl;
         cout << "You step through the doorway." << endl;
         return 'X';
      }

      else
      {
         cout << endl;
         cout << "The door is locked, you don't have a key." << endl;
         cout << "You look at the rabbit who shrugs." << endl;
         cout << "Guess you have to go find a key. You head back towards the queen's garden." << endl;
         return 'L';
      }
   }
}

/******************************************************************************
 * Hut::getItem()
 * This is the getItem method for the Hut class. This class doesn't have an
 * item to give Alice, so it returns "none".
 *****************************************************************************/
std::string Hut::getItem()
{
   return "none";
}

/******************************************************************************
 * Hut::~Hut()
 * This is the virtual destructor for the Hut class.
 *****************************************************************************/
Hut::~Hut()
{
   
}
