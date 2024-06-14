#include "Assessment.h"

CAssessment::CAssessment(istream& file) :CSpace(file)//constructer
{
    file >> *this;
}


//inputs the data from the txt file
istream& operator>>(istream& inputStream, CAssessment& assessment)
{
    inputStream >> assessment.mNamePart2 >> assessment.motivation >> assessment.success >> assessment.year;
    assessment.name = assessment.name + " " + assessment.mNamePart2;
    return inputStream;
}

//virtual function for the addition and subtraction of money form
int CAssessment::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
    if (mIsCompleted == false)//checks if completed
    {
        if (player->GetPlayerMotivation() > 0)//if the players motivation is above 0 then
        {
            mAssessmentStudent = player->GetPlayerName();//sets the player as the Assessment owner
            cout << player->GetPlayerName() << " completes " << name << " for " << motivation << " motivation and gains " << success << " sucess" << endl;
            mIsCompleted = true;//sets Assessment to owned to true 
            player->EditPlayerSuccess(+success);
            return -motivation;
            
        }
        else//if cant afford
        {
            return 0;//returns 0
        }

    }
    else//if completeted
    {
        if (mAssessmentStudent != player->GetPlayerName())//if the player name doesnt match owner name
        {
            cout << player->GetPlayerName() << " uses " << motivation / 2 << "to complete the assessment!" << endl;
            cout << "Success points are halved between each players: " << success / 2 << endl;
            player->EditPlayerSuccess(success / 2);
            return success / 2;
            otherPlayer->EditPlayerMotivation(motivation / 2);//pays rent
            return success / 2;
        }
        else//if player name matches owner
        {
            return 0;//returns 0
        }

    }

}