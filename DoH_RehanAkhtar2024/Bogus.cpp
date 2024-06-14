#include "Bogus.h"

CBogus::CBogus(istream& file) :CSpace(file)//constructer
{
	file >> *this;
}

int CBogus::Spacetype(CPlayer* player, CPlayer* otherPlayer, int spinnerSpin)
{
	// depending on the value produced in spinnerSpin a different message and value is outputted 
	if (spinnerSpin == 1)
	{
		cout << "Fall asleep in a boring lecture. Lose: " << 20 << endl;
		return -20;
	}
	if (spinnerSpin == 2)
	{
		cout << "Meet with coach about poor attendance. Lose: " << 50 << endl;
		return -50;
	}
	if (spinnerSpin == 3)
	{
		cout << "Feel really tired after a night out. Lose: " << 80 << endl;
		return -80;
	}
	if (spinnerSpin == 4)
	{
		cout << "Get kicked out of lab for messing about. Lose: " << 100 << endl;
		return -100;
	}
	if (spinnerSpin == 5)
	{
		cout << "Get dumped before a big night out. Lose: " << 150 << endl;
		return -150;
	}
	if (spinnerSpin == 6)
	{
		cout << "Fail an assignment. Lose: " << 200 << endl;
		return -200;
	}
	if (spinnerSpin == 7)
	{
		cout << "Get caught skipping classes. Lose: " << 50 << endl;
		return -50;
	}
	if (spinnerSpin == 8)
	{
		cout << "Your friend drops out of uni. Lose: " << 200 << endl;
		return -200;
	}
	if (spinnerSpin == 9)
	{
		cout << "Nobody turns up to teach your class. Lose: " << 300 << endl;
		return -300;
	}
	else
	{
		cout << "Lecturer changes assignment schedule. Lose: " << 20 << endl;
		return -20;
	}
}

istream& operator>>(istream& inputStream, CBogus& bogus)
{
	return inputStream;//returns the data from the input
}