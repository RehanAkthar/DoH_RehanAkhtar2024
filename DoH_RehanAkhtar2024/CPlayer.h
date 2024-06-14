#pragma once

#include <iostream>
using namespace std;
class CPlayer
{
private:
	string playerName = "player";//the name of the player

	int playerMotivation = 1000;//starting amount for player's motivation = 1000
	int playerSuccess = 0;//Starting amount of success for player = 0
	int boardLocation = 0;//go location
	int spinnerSpin;

public:
	void SetPlayerName(string name);//this function accepts a string input  to set the playerName variable
	string GetPlayerName();//this function returns the playerName variable
	int GetPlayerMotivation();//returns the playerMotivation variable
	int GetPlayerSuccess();//returns the playerSuccess variable
	int GetPlayerPosition();//returns the boardLocation variable
	void AccusedPlagiarism();//Sets the board location to Plagiarism hearing
	void EditPlayerMotivation(int amountMotivation);//accepts an int and adds the int variable to the playerMoney variable
	void EditPlayerSuccess(int amountSuccess);//accepts an int and adds the int variable to the playerMoney variable

	void PlayerMovement(int spinnerSpin);//adds the spinnerSpin to the boardLocation

};
