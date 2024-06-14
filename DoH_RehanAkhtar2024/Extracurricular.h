#pragma once

#include "CSpace.h"
class CExtracurricular :
    public CSpace
{
protected:
    //variables below are for the objects name.prices, ownership
    string mNamePart2;
    int motivationCost = 100;
    int successGained = 20;
    int halvedMotivationCost = motivationCost / 2;
    int halvedSuccessGained = successGained / 2;

    bool isCompleted = false;
    string extraCurricularDone;
public:
    CExtracurricular(istream& file);//object constructer
    friend istream& operator >> (istream& inputStream, CExtracurricular& extracurricular);//function used for the input of data from txt file to object
    virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin);//function for adding or subtracting money from player
};
