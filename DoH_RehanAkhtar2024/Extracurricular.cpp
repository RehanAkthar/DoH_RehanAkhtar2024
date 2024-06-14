#include "Extracurricular.h"

CExtracurricular::CExtracurricular(istream& file):CSpace(file)//constructer 
{
    file >> *this;
}
// virtual function for addition and subtraction of the players money
int CExtracurricular::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
    if (isCompleted == false)//checks if station is owned
    {
        if (player->GetPlayerMotivation() > 0)//if playermoney is greater than 0
        {
            extraCurricularDone = player->GetPlayerName();//sets the owner to the players name
            cout << player->GetPlayerName() << name << "undertakes " << name << "for" << " " << motivationCost << "and gains" << successGained << endl;
            isCompleted = true;//stes is owned to true
            return -motivationCost & successGained;//
        }
        else//if the player cant afford
        {
            return 0;//returns 0
        }

    }
    else//if the station is owned
    {
        if (extraCurricularDone != player->GetPlayerName())//if the player name doesnt match the owners name
        {
            cout << player->GetPlayerName() << " undertakes the same activity " << name << "He loses " << halvedMotivationCost << "and only gains " << halvedSuccessGained << endl;
            return -halvedMotivationCost & halvedSuccessGained;//returns the ticket fee
        }
        else//if the names match
        {
            return 0;//return 0
        }

    }
}
//used for the input of data into the object
istream& operator>>(istream& inputStream, CExtracurricular& extracurricular)
{
    inputStream >> extracurricular.mNamePart2;//gets the second part of the name
    extracurricular.name = extracurricular.name + " " + extracurricular.mNamePart2;//combines the name 
    return inputStream;//returns the inputstream
}