// BasketBallGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string>
#include <ctime>


using namespace std;


int main(){
	srand(time(NULL));
	cout << "Welcome to a BasketBallGame by SamTheCoder119" << endl;
	Sleep(1000);
	cout << "Please enter you team name: ";
	string my_team;
	cin >> my_team;
	cout<<"" << endl;
	Sleep(1000);
	cout << "Your team name is: " << my_team<< endl;
	
	int pick = (rand() % 20) + 1;
	
	string en_team_name;
	switch (pick) {
	case 1:
		en_team_name = "Storms";
		break;
	case 2:
		en_team_name = "Shooting Stars";
		break;
	case 3:
		en_team_name = "Defenders";
		break;
	case 4:
		en_team_name = "Aces";
		break;
	case 5:
		en_team_name = "Bald eagles";
		break;
	case 6:
		en_team_name = "Lightnings";
		break;
	case 7:
		en_team_name = "Bears";
		break;
	case 8:
		en_team_name = "Tigers";
		break;
	case 9:
		en_team_name = "Devils";
		break;
	case 10:
		en_team_name = "Bombers";
		break;
	case 11:
		en_team_name = "Bulldogs";
		break;
	case 12:
		en_team_name = "Captins";
		break;
	case 13:
		en_team_name = "Crocodiles";
		break;
	case 14:
		en_team_name = "Crushers";
		break;
	case 15:
		en_team_name = "Dragons";
		break;
	case 16:
		en_team_name = "Ducks";
		break;
	case 17:
		en_team_name = "Explorers";
		break;
	case 18:
		en_team_name = "Falcons";
		break;
	case 19:
		en_team_name = "Flames";
		break;
	case 20:
		en_team_name = "Kangaroos";
		break;
	default:
		en_team_name = "lame";
		break;

	}

	cout << "Searching opponent";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".\n";
	cout << "FOUND OPPONENT: " << en_team_name << endl;
	Sleep(1000);
	cout << my_team << " vs " << en_team_name << endl;
	Sleep(1000);

	int my_place;
	int my_pick;
	static int my_score = 0;
	static int en_score = 0;

	while (true) {
		srand(10498120948);
		srand(97874240);
		int en_pick = (rand() % 2) + 1;
		srand(10498120948);
		srand(97874240);
		int en_pick_three = (rand() % 3) + 1;
		srand(time(NULL));
		int en_place = (rand() % 2) + 1;


		srand(time(NULL));
		int correct_pick = (rand() % 2) + 1;
		srand(time(NULL));
		int correct_pick_three = (rand() % 3) + 1;
		srand(time(NULL));

		cout << my_team << ", it is your turn, format: (2 pointer[Choices: 1-2] or 3 pointer[Choices: 1-3]) Example:(2 2): ";
		cin >> my_place >> my_pick;
		//I picked my place and my pick, now I have to see if it is right
		if (my_place == 2) {
			if (my_pick == correct_pick) {
				my_score+=2;
				cout << "You scored! Your score is: " << my_score << endl;
				Sleep(1000);
				if (my_score >= 20) {
					cout << my_team << " won!!!" << endl;
					break;
				}
			}

			else {
				cout << "Sorry, you missed" << endl;
				Sleep(1000);
			}
		}
		else {
			if (my_pick == correct_pick_three) {
				my_score+=3;
				cout << my_team << " gets that three-pointer!!! They have: " << my_score << " points" << endl;
				Sleep(1000);
				if (my_score >= 20) {
					cout << my_team << " won!!!" << endl;
					break;
				}
			}

			else {
				cout << "ummm, you missed it..." << endl;
				Sleep(1000);
			}

		}
		if (en_place == 2) {
			cout << "The"<< en_team_name<<" selected 2 pointer" << endl;
			Sleep(1000);
			if (en_pick == correct_pick) {
				en_score+=2;
				cout << en_team_name << " scored and has: " << en_score << endl;
				Sleep(1000);
				if (en_score >= 20) {
					cout << en_team_name << " won!!!" << endl;
					break;
				}

			}

			else {
				cout << en_team_name << " missed!\n";
				Sleep(1000);
			}
		}

		else{
			cout << en_team_name << " selected a 3 pointer" << endl;
			Sleep(1000);
			if (en_pick_three == correct_pick_three) {
				en_score += 3;
				cout << en_team_name << " scorred and has: " << en_score << endl;
				Sleep(1000);
				if (en_score >= 20) {
					cout << en_team_name << " won!!!" << endl;
					break;
				}

			}

			else {
				cout << en_team_name << " missed!\n";
				Sleep(1000);
			}
		}



	}
}
