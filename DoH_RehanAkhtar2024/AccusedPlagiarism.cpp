#include "AccusedPlagiarism.h"

CAccusedPlagiarism::CAccusedPlagiarism(istream& file) :CSpace(file)//constructer
{
	file >> *this;
}

int CAccusedPlagiarism::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
	//outputs two messages that use the getplayername function form the cplayer class 
	cout << player->GetPlayerName() << " goes to Plagiarism Hearing" << endl;
	cout << player->GetPlayerName() << " loses " << motivationDeduction << " motivation" << endl;
	player->AccusedPlagiarism();//sets the players board location to the Plagiarism Hearing Space
	return -motivationDeduction;//returns the motivation loss value
}

istream& operator>>(istream& inputStream, CAccusedPlagiarism& AccusedPlagiarism)
{
	inputStream >> AccusedPlagiarism.mNamePart2 >> AccusedPlagiarism.mNamePart3 >> AccusedPlagiarism.mNamePart4;//retrieves data from txt file
	AccusedPlagiarism.name = AccusedPlagiarism.name+" "+AccusedPlagiarism.mNamePart2 + " "+AccusedPlagiarism.mNamePart3, " " + AccusedPlagiarism.mNamePart4;//combines the object name
	return inputStream;//returns the input stream
}