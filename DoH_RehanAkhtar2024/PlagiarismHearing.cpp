#include "PlagiarismHearing.h"

CPlagiarismHearing::CPlagiarismHearing(istream& file):CSpace(file)//constructer
{
	file >> *this;
}
//virtual function for the addition and subtractoion of moeny from the player class
int CPlagiarismHearing::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
	cout << player->GetPlayerName() << "lands on Plagiarism Hearing" << endl;
	cout << player->GetPlayerName() << "lands on Plagiarism Hearing and supports their friend" << endl;
	return 0;//this tile has no value for deduction so returns 0
}

istream& operator>>(istream& inputStream, CPlagiarismHearing& plagiarismHearing)//inputsdata from the input file 
{
	return inputStream;//returns the inputstream
}