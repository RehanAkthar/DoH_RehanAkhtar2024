#pragma once

#include "CSpace.h"
class CSkipClasses :
	public CSpace
{
protected:
	string mNamePart2;//string for the second part of the name
public:
	CSkipClasses(istream& file);//object constructer
	friend istream& operator >> (istream& inputStream, CSkipClasses& skipClasses);//function used for the input of data from txt file to object
	virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};
