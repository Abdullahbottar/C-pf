//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char hotel[8][6];
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			hotel[i][j] = '*';
//		}
//	}
//	int op = 0;
//	int room = 0;
//	int floor = 0;
//	while (op != -1)
//	{
//		cout << "FOR FIRST CLASS RESERVATION PRESS 0" << endl;
//		cout << "FOR ECONOMY CLASS RESERVATION PRESS 1." << endl;
//		cout << "ENTER YOUR CHOICE:";
//		cin >> op;
//		while (op != 0 && op != 1 && op != -1)
//		{
//			cout << "ENTER CORRECT CHOICE:";
//			cin >> op;
//		}
//		if (op == -1)
//		{
//			break;
//		}
//		if (op == 0)
//		{
//			cout << "WHICH FLOOR DO YOU WANT FROM (1-2)" << endl;
//			cin >> floor;
//			while (floor < 1 || floor>2)
//			{
//				cout << "ENTER CORRECT FLOOR(1-2):";
//				cin >> floor;
//			}
//			cout << "WHICH ROOM DO YOU WANT TO RESERVE (1-6)" << endl;
//			cin >> room;
//			while (room < 1 || room>6)
//			{
//				cout << "ENTER CORRECT ROOM(1-6):";
//				cin >> room;
//			}
//			if (hotel[floor - 1][room - 1] == '*')
//			{
//				cout << "ROOM RESERVED FOR YOU." << endl;
//				hotel[floor - 1][room - 1] = 'X';
//			}
//			else if (hotel[floor - 1][room - 1] == 'X')
//			{
//				cout << "ROOM ALREADY RESERVED." << endl;
//			}
//		}
//		if (op == 1)
//		{
//			cout << "FOR ECONOMY CLASS NON-SMOKING ZONE RESERVATION PRESS 2." << endl;
//			cout << "FOR ECONOMY CLASS SMOKING ZONE RESERVATION PRESS 3." << endl;
//			cout << "ENTER YOUR CHOICE:";
//			cin >> op;
//			while (op != 3 && op != 2 && op!=-1)
//			{
//				cout << "ENTER CORRECT CHOICE:";
//				cin >> op;
//			}
//			if (op == -1)
//			{
//				break;
//			}
//			if (op == 3)
//			{
//				cout << "WHICH FLOOR DO YOU WANT FROM (6-8)" << endl;
//				cin >> floor;
//				while (floor < 6 || floor>8)
//				{
//					cout << "ENTER CORRECT FLOOR(6-8):";
//					cin >> floor;
//				}
//				cout << "WHICH ROOM DO YOU WANT TO RESERVE (1-6)" << endl;
//				cin >> room;
//				while (room < 1 || room>6)
//				{
//					cout << "ENTER CORRECT ROOM(1-6):";
//					cin >> room;
//				}
//				if (hotel[floor - 1][room - 1] == '*')
//				{
//					cout << "ROOM RESERVED FOR YOU." << endl;
//					hotel[floor - 1][room - 1] = 'X';
//				}
//				else if (hotel[floor - 1][room - 1]=='X')
//				{
//					cout << "ROOM ALREADY RESERVED." << endl;
//				}
//
//			}
//			if (op == 2)
//			{
//				cout << "WHICH FLOOR DO YOU WANT FROM (3-5)" << endl;
//				cin >> floor;
//				while (floor < 3 || floor>5)
//				{
//					cout << "ENTER CORRECT FLOOR(3-5):";
//					cin >> floor;
//				}
//				cout << "WHICH ROOM DO YOU WANT TO RESERVE (1-6)" << endl;
//				cin >> room;
//				while (room < 1 || room>6)
//				{
//					cout << "ENTER CORRECT ROOM(1-6):";
//					cin >> room;
//				}
//				if (hotel[floor - 1][room - 1] == '*')
//				{
//					cout << "ROOM RESERVED FOR YOU." << endl;
//					hotel[floor - 1][room - 1] = 'X';
//				}
//				else if (hotel[floor - 1][room - 1] == 'X')
//				{
//					cout << "ROOM ALREADY RESERVED." << endl;
//				}
//			}
//
//		}
//
//	}
//	cout << endl;
//	cout << "HOTEL RESERVATION PLAN." << endl;
//	int s = 0;
//	op = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		cout << "FLOOR" << i + 1 << "\t";
//		for (int j = 0; j < 6; j++)
//		{
//			cout << hotel[i][j] << "\t";
//			if (hotel[i][j] == '*')
//			{
//				op++;
//			}
//			if (hotel[i][j] == 'X')
//			{
//				s++;
//			}
//		}
//		cout << endl;
//	}
//	cout << "TOTAL ROOM RESERVED ARE " << s <<"."<< endl;
//	cout << "TOTAL ROOM VACANT ARE " << op <<"."<< endl;
//	cout << endl;
//	return 0;
//}