#pragma once

#include "CSpace.h"
class CAssessment :
    public CSpace

{
protected:
    //variables below contain information for object name,prices and ownership
    string mNamePart2;
    int motivation = 0;
    int success = 5;
    int year = 0;
    bool mIsCompleted = false;
    string mAssessmentStudent;
public:
    CAssessment(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CAssessment& assessment);//function used for the input of data from txt file to object

    virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player

    struct playerPoints { int motivation; int success; };
};
