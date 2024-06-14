#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <fstream>
#include "CSpace.h"
#include "Spacetype.h"
#include <vector>
#include <ctime>
#include "CPlayer.h"
using namespace std;

// Returns a random number in the range 1 .. 10
int Random()
{
    return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * 10.0f + 1);
}

int main()
{
    {

        vector<CSpace*> spaceList;//creates the spaceList variable

        ifstream file("degrees.txt");
        if (file.is_open())//checks if file has been opene
        {
            while (file)// while not at the end of file
            {
                int Spacetype = 0;
                file >> Spacetype;//sets Spacetype to num value from txt file
                if (Spacetype != 0)
                {
                    //create an object of the appropiate type
                    spaceList.push_back(newSpace(ESpaceType(Spacetype), file));
                }
            }
        }
        else//if file couldn't be opened
        {
            cout << "file couldnt be opened" << endl;
        }
        ifstream seedFile("seed.txt");//inputs the seed file
        int seedNum = 0;
            if (seedFile)//checks if file is open
            {

                seedFile >> seedNum;// inputs the seed into seedNum
            }
            else
            {
                cout << "seed file not open";
            }


        CPlayer* player1 = new CPlayer;// creates a new  cplayer class object
        player1->SetPlayerName("Vyvyan");//sets the player name


        CPlayer* player2 = new CPlayer;//creates a new cplayer class object
        player2->SetPlayerName("Rick");//sets the player name



        cout << "Welcome to Scumbag College" << endl << endl;

        srand(seedNum);//this seeds the random function to get the same set of numbers
        //main game loop
        for (int roundNum = 1; roundNum <= 20; roundNum++)//loops included code for 20 iterations
        {
            cout << "ROUND " << roundNum << endl << "========= " << endl;// outputs the round number

            //player 1 - beneath is all of the steps the player goes through each round
            int spinnerSpin = Random();// sets a random num between 1-10 using random function
            cout << player1->GetPlayerName() << " spins " << spinnerSpin << endl;
            player1->PlayerMovement(spinnerSpin);//sets the board location in the player class
            cout << player1->GetPlayerName() << " lands on " << *spaceList[player1->GetPlayerPosition()] << endl;//outputs tile name
            spinnerSpin = Random();//retreives a new random num
            player1->EditPlayerMotivation(spaceList[player1->GetPlayerPosition()]->Spacetype(player1, player2, spinnerSpin));//edits the amount of player motivation, the amount depends on the output of the space status virtual function
            player1->EditPlayerSuccess(spaceList[player1->GetPlayerPosition()]->Spacetype(player1, player2, spinnerSpin));//edits the amount of player success, the amount depends on the output of the space status virtual function
            cout << player1->GetPlayerName() << " has " << player1->GetPlayerMotivation() << " motivation"  << endl << endl;//outputs player motivation
            cout << player1->GetPlayerName() << " has " << player1->GetPlayerSuccess() << " success" << endl << endl;//outputs player success

            //repeats the exact same code as above but for the second player
            //player 2
            spinnerSpin = Random();
            cout << player2->GetPlayerName() << " spins " << spinnerSpin << endl;
            player2->PlayerMovement(spinnerSpin);
            cout << player2->GetPlayerName() << " lands on " << *spaceList[player2->GetPlayerPosition()] << endl;
            spinnerSpin = Random();
            player2->EditPlayerMotivation(spaceList[player2->GetPlayerPosition()]->Spacetype(player1, player2, spinnerSpin));//edits the amount of player motivation, the amount depends on the output of the space status virtual function
            player2->EditPlayerSuccess(spaceList[player2->GetPlayerPosition()]->Spacetype(player1, player2, spinnerSpin));//edits the amount of player success, the amount depends on the output of the space status virtual function
            cout << player2->GetPlayerName() << " has " << player2->GetPlayerMotivation() << " motivation" << endl << endl;//outputs player motivation
            cout << player2->GetPlayerName() << " has " << player2->GetPlayerSuccess() << " success" << endl << endl;//outputs player success
        }

        //---------------------------------------------
        //end of game
        //output messages 
        cout << "Game Over" << endl << "========= " << endl;
        cout << player1->GetPlayerName() << " " << player1->GetPlayerSuccess() << endl;
        cout << player2->GetPlayerName() << " " << player2->GetPlayerSuccess() << endl << endl;

        if (player1->GetPlayerSuccess() > player2->GetPlayerSuccess())//checks if player1 has a greater amount of success than player 2
        {
            cout << player1->GetPlayerName() << " Wins!" << endl;//if player1 has more than they win
        }
        else
        {
            cout << player2->GetPlayerName() << " Wins!" << endl;//if player2 has more than they win
        }

        for (auto spaces : spaceList)
        {
            delete spaces;//deletes all the CSpace objects
        }
        delete player1;
        delete player2;
    }
    _CrtDumpMemoryLeaks();
}