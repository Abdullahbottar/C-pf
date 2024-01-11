//#include<iostream>
//#include<fstream>
//#include<string>
//#include<sstream>
//#include<time.h>
//#include<iomanip>
//using namespace std;
//
//void Input_DisplayTeams(char Team1[][20], char Team2[][20], int Team_Size, int Name_Length)
//{
//	cout << "Enter the Player Names for Team 1: " << endl;
//	for (int i = 0; i < Team_Size; i++)
//	{
//		cout << "Player " << (i + 1) << ": ";
//		cin.getline(Team1[i], Name_Length);
//	}
//
//	cout << "Enter the Player Names for Team 2: " << endl;
//	for (int i = 0; i < Team_Size; i++)
//	{
//		cout << "Player " << (i + 1) << ": ";
//		cin.getline(Team2[i], Name_Length);
//	}
//	cout << endl;
//
//	cout << setw(13 + 13) << "Team 1" << setw(8) << right << "|" << setw(17) << "Team 2" << endl;
//	for (int i = 0; i < Team_Size; i++)
//	{
//		cout << "Player " << i + 1 << setw(5) << left << ":";
//		cout << setw(20) << left << Team1[i];
//
//		cout << setw(5) << left << "|";
//
//		cout << setw(20) << left << Team2[i];
//
//		cout << endl;
//	}
//}
//
////void CalculateTotal_Score()
////{
////
////}
////
////void Wickets_Taken_Down()
////{
////
////}
////
////void Overs_Bowled()
////{
////
////}
////
////void Batting_ScoreBoard()
////{
////
////}
////
////void Bowling_ScoreBoard()
////{
////
////}
////
//////Function to Display Scorboard
////void displayScorecard()
////{
////    
////}
//
//
//
//
////// Function to Calculate Total Score
////int CalculateTotalScore(int teamScore[])
////{
////
////}
//
//int getbatsmanIndex(int current_batter, int counter1, int counter2)
//{
//	if (current_batter == counter1)
//	{
//		return counter2;
//	}
//	else if (current_batter == counter2)
//	{
//		return counter1;
//	}
//
//}
//
//
//int main()
//{
//	int total_scoreT1 = 0, total_scoreT2 = 0;
//	int T1scoreplayer[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
//	int T2scoreplayer[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
//	srand(time(0));
//
//	// 1) Reading Overs from the Text File.
//	string Overs;
//	ifstream FileRead("Configuration.txt");
//
//	getline(FileRead, Overs);
//	cout << "Overs = " << Overs << endl;
//
//	// 2)Calling Function to Input and Display Names
//	const int Team_Size = 6;
//	const int Name_Length = 20;
//	char Team1[Team_Size][Name_Length];
//	char Team2[Team_Size][Name_Length];
//
//	Input_DisplayTeams(Team1, Team2, Team_Size, Name_Length);
//
//	// 3) Doing Toss and Choosing Batting Team
//	int Toss;
//	Toss = rand() % 2 + 1;
//
//	cout << endl << "Doing TOSS..." << endl;
//	if (Toss == 1)
//	{
//		cout << "TOSS Winner:  Team 1!" << endl;
//	}
//	else if (Toss == 2)
//	{
//		cout << "TOSS Winner:  Team 2!" << endl;
//	}
//
//	// 4) Selecting Batsman and Bowlers and Scoring
//	int Max_Overs = 0;
//	int score, Wickets_taken = 0, oversBowled = 0;
//	stringstream over(Overs);
//	over >> Max_Overs;
//	string player1, player2;
//	int player1score = 0, player2score = 0, current_batter = 0, ballsBowled = 0, counter1 = 0, counter2 = 1;
//	int current_bowler = Team_Size - 1;
//	if (Toss == 1)
//	{
//		while (Wickets_taken < Team_Size - 1 || oversBowled < Max_Overs)
//		{
//
//			 cout << Team1[current_batter] << " and " << Team1[current_batter + 1] << "on the Ground." << endl; 
//				cout << Team1[current_batter] << " Batting.. " << endl;
//			cout << Team2[current_bowler] << " Bowling.. " << endl;
//
//			cout << "Press ENTER to bowl ball " << (ballsBowled + 1) << " of over " << (oversBowled + 1) << endl;                                            //To Generate Random Score
//			cin.ignore();
//			score = rand() % 8 - 1;
//			cout << "Score = " << score << endl;
//			if (score != -1)
//			{
//				T1scoreplayer[current_batter] += score;
//			}
//			/*	for (int i = 0; i < 12; i++)
//				{
//					cout << "Player " << i << " score " << T1scoreplayer[i] << endl;
//				}
//				ballsBowled++;*/
//			if (ballsBowled == 6)
//			{
//				oversBowled++;
//				ballsBowled = 0;
//				current_bowler--;
//			}
//
//			if (current_batter == counter1 && score == -1 && counter1 == 0)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team1[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter1 += 2;
//				current_batter = counter1;
//			}
//
//			else if (current_batter == counter1 && score == -1 && counter1 >= 2)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team1[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter1 += 1;
//				current_batter = counter1;
//			}
//			else if (current_batter == counter2 && score == -1 && counter2 == 1)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team1[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter2 += 1;
//				current_batter = counter2;
//			}
//			else if (current_batter == counter2 && score == -1 && counter2 >= 2)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team1[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter2 += 1;
//				current_batter = counter2;
//			}
//			else if (score == 1 || score == 3 || score == 5 || ballsBowled == 6)
//			{
//				/*player1score += score; */
//				current_batter = getbatsmanIndex(current_batter, counter1, counter2);
//
//			}
//
//
//
//
//		}
//	}
//
//	if (Toss == 2)
//	{
//		while (Wickets_taken < Team_Size || oversBowled < Max_Overs)
//		{
//
//			/*cout << Team1[current_batter] << " and " << Team1[current_batter + 1] << "on the Ground." << endl; */
//			cout << Team2[current_batter] << " Batting.. " << endl;
//			cout << Team1[current_bowler] << " Bowling.. " << endl;
//
//			cout << "Press ENTER to bowl ball " << (ballsBowled + 1) << " of over " << (oversBowled + 1) << endl;                                            //To Generate Random Score
//			cin.ignore();
//			score = rand() % 8 - 1;
//			cout << "Score = " << score << endl;
//
//			ballsBowled++;
//			if (ballsBowled == 6)
//			{
//				oversBowled++;
//				ballsBowled = 0;
//				current_bowler--;
//			}
//
//			if (current_batter == counter1 && score == -1 && counter1 == 0)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team2[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter1 += 2;
//				current_batter = counter1;
//			}
//
//			else if (current_batter == counter1 && score == -1 && counter1 >= 2)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team2[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter1 += 1;
//				current_batter = counter1;
//			}
//			else if (current_batter == counter2 && score == -1 && counter2 == 1)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team2[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter2 += 1;
//				current_batter = counter2;
//			}
//			else if (current_batter == counter2 && score == -1 && counter2 >= 2)
//			{
//				cout << "Batsman " << current_batter + 1 << ": " << Team2[current_batter] << " is Out." << endl;
//				Wickets_taken++;
//				counter2 += 1;
//				current_batter = counter2;
//			}
//
//
//			else if (score == 1 || score == 3 || score == 5 || ballsBowled == 6)
//			{
//				/* player1score += score; */
//				current_batter = getbatsmanIndex(current_batter, counter1, counter2);
//
//			}
//
//
//
//
//		}
//	}
//
//
//}