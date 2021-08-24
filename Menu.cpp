/******************************************************************************
 * Program Name: Menu.cpp - Final Project
 * Author: Victoria Dmyterko
 * Date: 6/06/2019
 * Description: This is the source file for the Menu class. This 
 *              class is used to help run the game. 
 *****************************************************************************/
#include "Menu.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************
 * Menu::Menu()
 * This is the default constructor for the Menu class. This default
 * constructor simply sets the member variable numSteps to 0, member 
 * pointers to nullptr, and winGame to false.
 *****************************************************************************/
Menu::Menu()
{
   numSteps = 0;

   location = nullptr;
   rabbit = nullptr;
   doorKnob = nullptr;
   caterpillar = nullptr;
   madhatter = nullptr;
   queen = nullptr;
   hut = nullptr;

   Alice = nullptr;

   winGame = false;
}

/******************************************************************************
 * Menu::intro()
 * This is the intro method for the game. This method introduces the rules of 
 * the game and asks the user if they would like to play. This method takes 
 * no arguments and returns nothing. 
 *****************************************************************************/
void Menu::intro()
{
   //Give user background information about the game.
   cout << endl;
   cout << "Welcome to Alice in Wonderland!" << endl;
   cout << "In this game you play as Alice stuck in a strange dreamscape. Your goal is to figure out how to get home!" << endl;
   cout << "However, you only have 30 steps to accomplish this goal. If you can't get home before 30 steps, Alice will be stuck here forever!" << endl;

   cout << endl;

   //Ask the user if they would like to play. 
   cout << "Would you like to play?" << endl;
   cout << "1. Yes" << endl;
   cout << "2. No" << endl;

   std::string userState;

   cin >> userState;

   //Validate input
   while(isIntRange(userState, 2, 1) == false)
   {
      cout << "Please choose 1 for Yes or 2 for No." << endl;
      cin >> userState;
   }

   //Change input to integer
   int userChoice = std::stoi(userState);

   if(userChoice == 1)
   {
      cout << endl;
      cout << "Good luck Alice! May you get home safely!" << endl;
      cout << endl;

      //Create player
      Alice = new Player();

      //Create space objects
      rabbit = new RabbitHole();
      doorKnob = new DoorKnob();
      caterpillar = new Caterpillar();
      madhatter = new Madhatter();
      queen = new Queen();
      hut = new Hut();

      //Add player to spaces
      rabbit->setPlayer(Alice);
      doorKnob->setPlayer(Alice);
      caterpillar->setPlayer(Alice);
      madhatter->setPlayer(Alice);
      queen->setPlayer(Alice);
      hut->setPlayer(Alice);

      //Link spaces by pointers
      rabbit->setRight(doorKnob);

      doorKnob->setLeft(rabbit);
      doorKnob->setRight(caterpillar);

      caterpillar->setLeft(doorKnob);
      caterpillar->setRight(madhatter);

      madhatter->setLeft(caterpillar);
      madhatter->setRight(queen);

      queen->setLeft(madhatter);
      queen->setRight(hut);

      hut->setLeft(queen);

      playGame();
   }

}

/******************************************************************************
 * Menu::playGame()
 * This is the playGame method for the game. This method implements most of the
 * game for the program. This method takes no arguments and returns nothing. 
 *****************************************************************************/
void Menu::playGame()
{
   //Set step counter to 0  
   numSteps = 0;

   //Set initial location to rabbit hole.
   location = rabbit;

   //Use a while loop to run the game
   while(numSteps < 30 && winGame == false)
   {
      char movement = location->action();

      std::string item = location->getItem();

      if(location->getVisited() == false)
      {
         location->setVisited(true);
      }

      if(item != "none" && location->getRetrieved() == true)
      {
         Alice->addItem(item);
      } 

      if(movement == 'R')
      {
         location = location->getRight();
      }

      else if(movement == 'L')
      {
         location = location->getLeft();
      }

      else if(movement == 'X')
      {
         cout << endl;
         cout << "You wake up in the grass near a burbling stream." << endl; 
         cout << "In the distance you can hear your sister shouting your name." << endl;
         cout << "Was it all just a dream?" << endl;
         cout << endl;
         cout << "You made it home! Congratulations!" << endl;
         cout << endl;
         winGame = true;
      }
      
      //Increase steps
      numSteps++;
   }

   if(winGame == false)
   {
      cout << endl;
      cout << "Oh no, Alice didn't escape! She became stuck in a strange, wild Wonderland." << endl;
      cout << "Better luck next time!" << endl;
      cout << endl;
   }
}

/******************************************************************************
 * Menu::~Menu()
 * This is the destructor of the Menu class. This deletes all of the 
 * dynamically allocated memory used in this game.  
 *****************************************************************************/
Menu::~Menu()
{
   if(Alice != nullptr)
   {
      delete Alice;
   }

   if(rabbit != nullptr)
   {
      delete rabbit;
   }
   
   if(doorKnob != nullptr)
   {
      delete doorKnob;
   }

   if(caterpillar != nullptr)
   {
      delete caterpillar;
   }

   if(madhatter != nullptr)
   {
      delete madhatter;
   }

   if(queen != nullptr)
   {
      delete queen;
   }

   if(hut != nullptr)
   {
      delete hut;
   }
}
