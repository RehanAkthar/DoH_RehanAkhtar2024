#pragma once

#include "CSpace.h"
class CAccusedPlagiarism :
    public CSpace
{
protected:
    //strings for a combined name
    string mNamePart2;
    string mNamePart3;
    string mNamePart4;
    int motivationDeduction = 50;//value for a motivation loss
public:
    CAccusedPlagiarism(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CAccusedPlagiarism& Accusedplagiarism);//function used for the input of data from txt file to object
    virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};
