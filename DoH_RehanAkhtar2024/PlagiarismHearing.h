#pragma once

#include "CSpace.h"
class CPlagiarismHearing :
    public CSpace
{
public:
    CPlagiarismHearing(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CPlagiarismHearing& plagiarismHearing);//function used for the input of data from txt file to object
    virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};