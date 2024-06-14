#include "WelcomeWeek.h"

CWelcomeWeek::CWelcomeWeek(istream& file):CSpace(file)//constructer
{
	file >> *this;
}

int CWelcomeWeek::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)//used for adding or subtracting form player money
{
	return 0;//no cost for this tile type
}
//inputs data from istream
istream& operator>>(istream& inputStream, CWelcomeWeek& WelcomeWeek)
{
	inputStream >> WelcomeWeek.mNamePart2;
	WelcomeWeek.name = WelcomeWeek.name + " " + WelcomeWeek.mNamePart2; //combines the object name
	return inputStream;//returns the input stream
}