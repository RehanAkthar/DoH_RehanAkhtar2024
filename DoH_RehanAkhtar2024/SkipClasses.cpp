#include "SkipClasses.h"

CSkipClasses::CSkipClasses(istream& file):CSpace(file)//constructer
{
	file >> *this;
}
//this function requires a int to be returned for the adding or subtracting from the player money
int CSkipClasses::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{

	cout << player->GetPlayerName() << " lands on Skip Classes and hangs out with their dodgy mates" << endl;
	return 0;//this tile doesnt have a cost
}
//inputs from istream
istream& operator>>(istream& inputStream, CSkipClasses& skipClasses)
{
	inputStream >> skipClasses.mNamePart2;//gets part 2 of the object name
	skipClasses.name = skipClasses.name + " " + skipClasses.mNamePart2;//combines the object name
	return inputStream;//returns the input stream
}