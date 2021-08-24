/******************************************************************************
 * Program Name: main.cpp - Final Project 
 * Author: Victoria Dmyterko
 * Date: 6/08/2019
 * Description: This is the main file for the Final Project - Alice in 
 *              Wonderland. This project represents a video game where the user
 *              plays as Alice trying to get back home from a strange 
 *              dreamland. In order to win the user must "wake up" by getting 
 *              a key that unlocks the final door. The user only has 30
 *              "steps" to complete the goal, if they don't then Alice is stuck
 *              in a dream forever! 
 *****************************************************************************/
#include "Menu.hpp"

int main()
{
   //Create the menu for the game
   Menu gameMenu;

   //Call the intro which will in turn start the game. 
   gameMenu.intro();

}