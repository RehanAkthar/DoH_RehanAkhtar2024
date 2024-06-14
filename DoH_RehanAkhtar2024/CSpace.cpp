#include "CSpace.h"


CSpace::CSpace(istream& file)//constructer
{
	file >> *this;
}
//inputs the data from the file
istream& operator>>(istream& inputStream, CSpace& space)
{
	inputStream >> space.name;//sets the name of the tile
	return inputStream;//returns the inputstream
}
//used for the outputting of the tile name
ostream& operator<<(ostream& outputStream, const CSpace& space)
{
	outputStream << space.name;//sets the outstream
	return outputStream;
}