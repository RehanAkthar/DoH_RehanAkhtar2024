#pragma once

#include "CSpace.h"

enum class ESpaceType : int//enum class for a switch case to determine the tile type
{
	Assessment = 1,
	WelcomeWeek = 2,
	ExtracurricularActivity = 3,
	Bonus = 4,
	Bogus = 5,
	PlagiarismHearing = 6,
	AccusedofPlagiarism = 7,
	SkipClasses = 8
};
CSpace* newSpace(ESpaceType space, istream& file);//function for adding or subtracting motivation and success from player 
