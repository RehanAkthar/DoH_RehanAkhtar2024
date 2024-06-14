#pragma once

#include "CSpace.h"
class CBonus :
    public CSpace
{
public:
    CBonus(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CBonus& bonus);//function used for the input of data from txt file to object
    virtual int  Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};
