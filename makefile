:#Project Name: makefile for Final Project
#Author: Victoria Dmyterko	
#Date: 6/08/2019
#Description: This is the makefile for the Final Project. This file creates an executable for the game. 

CXX = g++
CXXFLAGS = -std=c++11

SRCS = main.cpp isIntRange.cpp Menu.cpp Player.cpp RabbitHole.cpp Space.cpp DoorKnob.cpp Caterpillar.cpp Madhatter.cpp Queen.cpp Hut.cpp

HEADERS = isIntRange.hpp Menu.hpp Player.hpp RabbitHole.hpp Space.hpp DoorKnob.hpp Caterpillar.hpp Madhatter.hpp Queen.hpp Hut.hpp

wonderland: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o wonderland

clean:
	-rm wonderland
