/******************************************************************************
 * Program Name: Caterpillar.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/08/2019
 * Description: This is the source file for the Caterpillar derived class. This
 *              class is derived from the Space base class. This class is the
 *              third space in the game representing the Caterpillar Alice
 *              meets while she is very small and the mushroom she must eat
 *              to return to regular size.
 *****************************************************************************/
#include "Caterpillar.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * Caterpillar::Caterpillar()
 * This is the default constructor for the Catterpillar class. This default
 * constructor simply sets the member variables to nullptr and the bool member
 * variables to false. 
 *****************************************************************************/
Caterpillar::Caterpillar()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
   regSize = false;
}

/******************************************************************************
 * Caterpillar::action()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char Caterpillar::action()
{
   if(getVisited() == false)
   {
      //Set the new scene
      cout << endl;
      cout << "After crawling under the door you seem to be in a forest." << endl;
      cout << "On closer examination you are actually surrounded by grass! You are so tiny, you're the size of a bug!" << endl;
      cout << "To your right you see a caterpillar lounging on a mushroom" << endl;
      cout << "To your left is the tiny door you came through" << endl;
      
      //Ask what user wants to do
      cout << "What would you like to do?" << endl;

      cout << endl;

      //Give user options
      cout << "1. Go through the tiny door" << endl;
      cout << "2. Approach the caterpillar" << endl;

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

      //If user chooses 1 go back through tiny door
      if(choiceInt1 == 1)
      {
         cout << endl;
         cout << "You decide to go back through the tiny door." << endl;
         return 'L';
      }

      //Otherwise approach caterpillar
      else
      {
         cout << endl;
         cout << "You approach the caterpillar sitting on a mushroom. It stares at you drowsily." << endl;
         cout << "\"Who are you??\" the caterpillar asks." << endl;
         cout << "\"I-I hardly know, sir, just at present - at least I know who I WAS when I got up this morning.\" was your reply." << endl;
         cout << "This sets off a long conversation during which the caterpillar asks questions that make your head spin." << endl;
         cout << "In the end, the caterpillar yawns and slinks off the mushroom and into the grass." << endl;
         cout << "\"The mushroom will make you grow taller.\" the caterpillar remarks, then soon it is gone." << endl;

         cout << "Would you like to eat a piece of the mushroom?" << endl;
         cout << endl;

         cout << "1. Yes" << endl;
         cout << "2. No" << endl;

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

         while(choiceInt2 == 2)
         {
            cout << endl;
            cout << "You place the mushroom in your pocket. Then you lean against the large mushroom and take a rest." << endl;
            cout << "After a while you can't help but wonder about the mushroom in your pocket. You pull it out." << endl;
            cout << "What do you do?" << endl;

            cout << endl;

            cout << "1. Eat the mushroom" << endl;
            cout << "2. Put it away" << endl;

            cin >> choice2;

            //Validate
            while(isIntRange(choice2, 2, 1) == false)
            {
               cout << "Please choose 1 or 2." << endl;
               cin >> choice2;
            }

            //Change from string to int
            choiceInt2 = std::stoi(choice2);
         }

         if(choiceInt2 == 1)
         {
            cout << endl;
            cout << "You decide to take a nibble of the mushroom." << endl;
            cout << "You get a tingle down your spine, then you start to grow in size! In a moment, you are normal-sized!" << endl;
            cout << "Now that you are normal-sized you can see the white rabbit running off in the distance towards your right." << endl; 
            cout << "You decide to pursue him!" << endl;
            regSize = true;
            setRetrieved(true);
            return 'R';
         }
      }
   }

   //If use has visited but hasn't approached the caterpillar then this section executes 
   else if(regSize == false && getVisited() == true)
   {
      cout << endl;
      cout << "You are back in the grassy area. Do you visit the caterpillar?" << endl;
      cout << endl;

      cout << "1. Yes" << endl;
      cout << "2. No" << endl;

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
         cout << "You approach the caterpillar sitting on a mushroom. It stares at you drowsily." << endl;
         cout << "\"Who are you??\" the caterpillar asks." << endl;
         cout << "\"I-I hardly know, sir, just at present - at least I know who I WAS when I got up this morning.\" was your reply" << endl;
         cout << "This sets off a long conversation during which the caterpillar asks questions that make your head spin." << endl;
         cout << "in the end, the caterpillar yawns and slinks off the mushroom and into the grass." << endl;
         cout << "\"The mushroom will make you grow taller.\" the caterpillar remarks, then soon it is gone." << endl;

         cout << "Would you like to eat a piece of the mushroom?" << endl;
         cout << endl;

         cout << "1. Yes" << endl;
         cout << "2. No" << endl;

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

         while(choiceInt4 == 2)
         {
            cout << endl;
            cout << "You place the mushroom in your pocket. Then you lean against the large mushroom and take a rest." << endl;
            cout << "After a while you can't help but wonder about the mushroom in your pocket. You pull it out." << endl;
            cout << "What do you do?" << endl;

            cout << endl;

            cout << "1. Eat the mushroom" << endl;
            cout << "2. Put it away" << endl;

            cin >> choice4;

            //Validate
            while(isIntRange(choice4, 2, 1) == false)
            {
               cout << "Please choose 1 or 2." << endl;
               cin >> choice4;
            }

            //Change from string to int
            choiceInt4 = std::stoi(choice4);
         }

         if(choiceInt4 == 1)
         {
            cout << endl;
            cout << "You decide to take a nibble of the mushroom." << endl;
            cout << "You get a tingle down your spine, then you start to grow in size! In a moment, you are normal-sized!" << endl;
            cout << "Now that you are normal-sized you can see the white rabbit running off into a forest towards your right." << endl; 
            cout << "You decide to pursue him!" << endl;
            regSize = true;
            setRetrieved(true);
            return 'R';
         }
      }
   } 

   //If the user has visited and gotten the mushroom piece then there is nothing left to do.
   else
   {
      cout << endl;
      cout << "You are back in the grassy area with the mushrooms." << endl;
      cout << "You see the tiny door to your left and a forest to your right." << endl;
      cout << "There doesn't seem to be anything left to do here. Where would you like to go?" << endl;
      cout << endl;

      cout << "1. The tiny door" << endl;
      cout << "2. The forest" << endl;

      std::string choice5;

      cin >> choice5;

      //Validate
      while(isIntRange(choice5, 2, 1) == false)
      {
         cout << "Please choose 1 or 2" << endl;
         cin >> choice5;
      }

      //Change from string to int
      int choiceInt5 = std::stoi(choice5);

      if(choiceInt5 == 1)
      {
         cout << endl;
         cout << "You take a sip from the vial, and shrink down to slip under the tiny door!" << endl;
         return 'L';
      }

      else if(choiceInt5 == 2)
      {
         cout << endl;
         cout << "You take a nibble of the mushroom. Once regular-size you head towards the forest." << endl;
         return 'R';
      }
   }
}

/******************************************************************************
 * Caterpillar::getItem()
 * This is the getItem method for the Caterpillar class. This class lets Alice 
 * pick up a mushroom that when eaten returns her to regular size.
 *****************************************************************************/
std::string Caterpillar::getItem()
{
   return "Mushroom";
}

/******************************************************************************
 * Caterpillar::~Caterpillar()
 * This is the virtual destructor for the Caterpillar class.
 *****************************************************************************/
Caterpillar::~Caterpillar()
{
   
}
