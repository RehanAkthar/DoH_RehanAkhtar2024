#include "CPlayer.h"
//this function is used for the outputting of the amount of money the player has

void CPlayer::SetPlayerName(string name)
{
	playerName = name;
}

//this function is used for outputting the name of the current player 
string CPlayer::GetPlayerName()
{
	return playerName;//returns the player name
}

int CPlayer::GetPlayerMotivation()
{
	return playerMotivation;//returns playerMotivation
}

//this function is used for the outputting of the amount of money the player has
int CPlayer::GetPlayerSuccess()
{
	return playerSuccess;//returns playerMoney
}

void CPlayer::AccusedPlagiarism()
{
	boardLocation = 33;
}


//for getting the location of the player
int CPlayer::GetPlayerPosition()
{
	return boardLocation;//returns the boardLocation variable 
}

//for the adding and subtracting of the players money 
void CPlayer::EditPlayerMotivation(int amountMotivation)
{
	playerMotivation += amountMotivation;//for subtraction the amount vairable will be a minus number
}

//for the adding and subtracting of the players money 
void CPlayer::EditPlayerSuccess(int amountSuccess)
{
	playerSuccess += amountSuccess;//for subtraction the amount vairable will be a minus number

}

//the player movenment around the board
void CPlayer::PlayerMovement(int spinnerSpin)
{
	int previousPosition = boardLocation; //gets the previous location
	boardLocation += spinnerSpin;
	if ((previousPosition + spinnerSpin) > 35) //checks if the value will be over 35 
	{
		int positionDifference = (previousPosition + spinnerSpin) - 35;//gets the tile value for after surpassing 35
		boardLocation = positionDifference - 1;//removes 1 as vectors start with an index of 0
		cout << playerName << " attends Welcome Week and gains" << 250 << "motivation" << endl;
		playerMotivation += 250;//adds 250 to playerMotivation
	}
}