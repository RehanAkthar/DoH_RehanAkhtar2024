#pragma once

#include <iostream>
#include "CPlayer.h"
using namespace std;
class CSpace
{
protected:
	string name;
public:
	CSpace(istream& file);
	friend istream& operator >> (istream& inputStream, CSpace& space);//function used for the input of data from txt file to object
	friend ostream& operator << (ostream& outputStream, const CSpace& square);

	virtual int Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin) = 0;//pure virtual function
};