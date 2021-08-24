/******************************************************************************
 * Program Name: DoorKnob.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/08/2019
 * Description: This is the source file for the DoorKnob derived class. This
 *              class is derived from the Space base class. This class is the
 *              second space in the game representing the small door and door
 *              knob that Alice must get past. 
 *****************************************************************************/
#include "DoorKnob.hpp"
#include "isIntRange.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * DoorKnob::DoorKnob()
 * This is the default constructor for the DoorKnob class. This default
 * constructor simply sets the member variables to nullptr and the bool member
 * variable to false. 
 *****************************************************************************/
DoorKnob::DoorKnob()
{
   setLeft(nullptr);
   setRight(nullptr);
   setVisited(false);
   doorOpened = false;
}

/******************************************************************************
 * DoorKnob::action()
 * This is the action() member function. This member function sets the scene 
 * and presents the choices to the user. This function takes no arguments and
 * returns a character. 
 *****************************************************************************/
char DoorKnob::action()
{
   if(getVisited() == false)
   {  
      //Set the scene
      cout << "After falling through the rabbit hole you are in a large room with checkered flooring." << endl;
      cout << "In the corner to your right is a tiny door with an equally small doorknob. On a table in the room is a vial filled with a blue-ish liquid." << endl;
      cout << "When you test the door you find it locked. When you look at the vial you see a small note attached which says \"Drink Me\"." << endl;
      cout << "What do you do?" << endl;

      cout << endl;

      //Present choices to the user
      cout << "1. Crawl back up the rabbit hole." << endl;
      cout << "2. Pick up the vial." << endl;

      std::string numStr;

      cin >> numStr;

      //Validate
      while(isIntRange(numStr, 2, 1) == false)
      {
         cout << "Please choose 1 or 2." << endl;
         cin >> numStr;
      }

      //Change input type to integer
      int num = std::stoi(numStr);

      if(num == 1)
      {
         cout << endl;
         cout << "You decide to crawl back up the rabbit hole. Maybe you can find your way home from there?" << endl;
         return 'L';
      }

      else
      {
         cout << endl;
         cout << "You decide to pick up the vial and place it in your pocket. Perhaps it will come in handy." << endl;
         setRetrieved(true);

         //New choices for the user
         cout << "What would you like to do now?" << endl;
         cout << endl;

         cout << "1. Crawl back up the rabbit hole." << endl;
         cout << "2. Examine the door." << endl;

         std::string choice;

         cin >> choice;

         //Validate
         while(isIntRange(choice, 2, 1) == false)
         {
            cout << "Please choose 1 or 2." << endl;
            cin >> choice;
         }

         //Change input type to integer
         int choiceInt = std::stoi(choice);

         if(choiceInt == 1)
         {
            cout << endl;
            cout << "You decide to crawl back up the rabbit hole. Maybe you can find your way home from there?" << endl;
            return 'L';
         }

         else if(choiceInt == 2)
         {
            cout << endl;
            cout << "The door is so small! You're not sure what to do. All you have is this vial. What will you do?" << endl;
            cout << endl;
            
            cout << "1. Go back up the rabbit hole" << endl;
            cout << "2. Drink the vial" << endl;

            std::string choice2;

            cin >> choice2;

            //Validate
            while(isIntRange(choice2, 2, 1) == false)
            {
               cout << "Please choose 1 or 2." << endl;
               cin >> choice2;
            }

            //Change input type to integer
            int choiceInt2 = std::stoi(choice2);

            if(choiceInt2 == 1)
            {
               cout << endl;
               cout << "You decide to crawl back up the rabbit hole. Maybe you can find your way home from there?" << endl;
               return 'L';
            }

            else if(choiceInt2 == 2)
            {
               cout << endl;
               cout << "You drink some of the liquid in the vial. You feel a bit faint. Without warning you start to shrink!" << endl;
               cout << "First you shrinking to the size of the door, then you're smaller than the door..." << endl;
               cout << "Once you stop shrinking you're small enough to crawl under the door altogether!" << endl;
               cout << "You decide to crawl under the door to see what is on the other side." << endl;
               doorOpened = true;
               return 'R';
            }


         }

      }
      
   }

   //This section executes if the user returns and hasn't picked up the vial yet
   else
   {
      if(getRetrieved() == false)
      {
         cout << endl;
         cout << "The tiny door is still in the corner and the vial is still on the table. You decide to pick up the vial." << endl;
         setRetrieved(true);
         cout << "Do you drink it?" << endl;
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

         //Change input type to integer
         int choiceInt3 = std::stoi(choice3);

         while(choiceInt3 == 2)
         {
            cout << endl;
            cout << "You stand in the room for a while waiting for something to happen. Nothing does." << endl;
            cout << "You are getting bored. You look at the vial in your hand. Maybe you should see what it does?" << endl;
            cout << "Do you drink it?" << endl;
            cout << endl;

            cout << "1. Yes" << endl;
            cout << "2. No" << endl;

            cin >> choice3;

            //Validate
            while(isIntRange(choice3, 2, 1) == false)
            {
               cout << "Please choose 1 or 2." << endl;
               cin >> choice3;
            }

            //Change input type to integer
            choiceInt3 = std::stoi(choice3);
         }

         if(choiceInt3 == 1)
         {
            cout << endl;
            cout << "You drink some of the liquid in the vial. You feel a bit faint. Without warning you start to shrink!" << endl;
            cout << "First you shrink to the size of the door, then you're smaller than the door..." << endl;
            cout << "Once you stop shrinking you're small enough to crawl under the door altogether!" << endl;
            cout << "You decide to crawl under the door to see what is on the other side." << endl;
            doorOpened = true;
            return 'R';
         }

      }

      //This section executes if the user has used the vial and has been to the room before
      else if(getRetrieved() == true && doorOpened == true)
      {
         cout << endl;
         cout << "The room is empty. There is nothing to do here. To your left is the rabbit hole, to your right is the tiny door." << endl;
         cout << "Where do you want to go?" << endl;
         cout << endl;

         cout << "1. Up the rabbit hole." << endl;
         cout << "2. Through the tiny door." << endl;

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
            cout << "You decide to go back through the rabbit hole." << endl;
            return 'L';
         }

         else if(choiceInt4 == 2)
         {
            cout << endl;
            cout << "You go back through the small door" << endl;
            return 'R';
         }
      }

      //This section executes if the user has picked up the vial but hasn't drank it yet.
      else
      {
         cout << endl;
         cout << "You are back in the room with the checkered floor. You picked up the vial in this room." << endl;
         cout << "To your left is the rabbit hole. To your right is the tiny door." << endl;
         cout << "Do you drink the vial?" << endl;
         cout << endl;

         cout << "1. Yes" << endl;
         cout << "2. No" << endl;

         std::string choice5;
         cin >> choice5;

         //Validate
         while(isIntRange(choice5, 2, 1) == false)
         {
            cout << "Please choose 1 or 2." << endl;
            cin >> choice5;
         }

         //Change from string to int
         int choiceInt5 = std::stoi(choice5);

         while(choiceInt5 == 2)
         {
            cout << endl;
            cout << "You stand in the room for a while waiting for something to happen. Nothing does." << endl;
            cout << "You are getting bored. You look at the vial in your hand. Maybe you should see what it does?" << endl;
            cout << "Do you drink it?" << endl;
            cout << endl;

            cout << "1. Yes" << endl;
            cout << "2. No" << endl;

            cin >> choice5;

            //Validate
            while(isIntRange(choice5, 2, 1) == false)
            {
               cout << "Please choose 1 or 2." << endl;
               cin >> choice5;
            }

            //Change input type to integer
            choiceInt5 = std::stoi(choice5);
         }

         if(choiceInt5 == 1)
         {
            cout << endl;
            cout << "You drink some of the liquid in the vial. You feel a bit faint. Without warning you start to shrink!" << endl;
            cout << "First you shrink to the size of the door, then you're smaller than the door, once you stop shrinking you're small enough to crawl under the door altogether!" << endl;
            cout << "You decide to crawl under the door to see what is on the other side." << endl;
            doorOpened = true;
            return 'R';
         }

      }
      
   } 
}
      
/******************************************************************************
 * DoorKnob::getItem()
 * This is the getItem method for the DoorKnob class. This class lets Alice 
 * pick up a potion that when consumed shrinks her into a tiny size.
 *****************************************************************************/
std::string DoorKnob::getItem()
{
   return "Vial";
}

/******************************************************************************
 * DoorKnob::~DoorKnob()
 * This is the virtual destructor for the DoorKnob class.
 *****************************************************************************/
DoorKnob::~DoorKnob()
{
   
}
