#include "Bonus.h"

CBonus::CBonus(istream& file):CSpace(file)
{
	file >> *this;
}

int CBonus::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
	// depending on the value produced in spinnerSpin a different message and value is outputted 
	if (spinnerSpin == 1)
	{
		cout << "Recieve some usefuul feedback. Gain: " << 20 << endl;
		return 20;
	}
	if (spinnerSpin == 2)
	{
		cout << "Win a hackathon. Gain: " << 50 << endl;
		return 50;
	}
	if (spinnerSpin == 3)
	{
		cout << "Get a free coffee with full loyalty card. Gain: " << 80 << endl;
		return 80;
	}
	if (spinnerSpin == 4)
	{
		cout << "Impress your lecturer in class. Gain: " << 100 << endl;
		return 100;
	}
	if (spinnerSpin == 5)
	{
		cout << "Motivational talk from course leader. Gain: " << 5 << endl;
		return 5;
	}
	if (spinnerSpin == 6)
	{
		cout << "Secure an industry placement. Gain: " << 150 << endl;
		return 150;
	}
	if (spinnerSpin == 7)
	{
		cout << "Attend an inpsiring C++ lecture. Gain: " << 200 << endl;
		return 200;
	}
	if (spinnerSpin == 8)
	{
		cout << "Get your best ever assignment mark. Gain: " << 300 << endl;
		return 300;
	}
	if (spinnerSpin == 9)
	{
		cout << "Make a new romantic friend. Gain: " << 150 << endl;
		return 150;
	}
	else
	{
		cout << "Get elected School President. Gain: " << 10 << endl;
		return 10;
	}
}

istream& operator>>(istream& inputStream, CBonus& bonus)
{
	return inputStream;//returns the data from the input
}