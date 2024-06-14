#pragma once

#include "CSpace.h"
class CWelcomeWeek :
    public CSpace
{
protected:
    string mNamePart2;
public:
    CWelcomeWeek(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CWelcomeWeek& WelcomeWeek);//function used for the input of data from txt file to object
    virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};

