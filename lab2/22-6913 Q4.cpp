//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "OPTION                                         SPEED in m/s"  << endl;
//	cout << "Press 1 to select carbon dioxide as a medium         258.0" << endl;
//	cout << "Press 2 to select air as a medium                    331.5" << endl;
//	cout << "Press 3 to select helium as a medium                 972.0" << endl;
//	cout << "Press 4 to select hydrogen as a medium              1270.0" << endl;
//	cout << "Press 5 to exit the program." << endl;
//	int input;
//	cout << "Enter your choice:";
//	cin >> input;
//	int time;
//	float distance;
//	switch (input)
//	{
//	case 1:
//		cout << "enter the total seconds it took to detect sound:";
//		cin >> time;
//		if (time > 0 && time <=30)
//		{
//			distance = 258 * time;
//			cout << "The total distance covered by sound in carbon dioxide is:" << distance << " meters." << endl;
//		}
//		else
//		{
//			cout << "invalid number of seconds input" << endl;
//		}
//		break;
//	case 2:
//		cout << "enter the total seconds it took to detect sound:";
//		cin >> time;
//		if (time > 0 && time <= 30)
//		{
//			distance = 331.5 * time;
//			cout << "The total distance covered by sound in air is:" << distance << " meters." << endl;
//		}
//		else
//		{
//			cout << "invalid number of seconds input" << endl;
//		}
//		break;
//	case 3:
//		cout << "enter the total seconds it took to detect sound:";
//		cin >> time;
//		if (time > 0 && time <= 30)
//		{
//			distance = 972 * time;
//			cout << "The total distance covered by sound in helium is:" << distance << " meters." << endl;
//		}
//		else
//		{
//			cout << "invalid number of seconds input" << endl;
//		}
//		break;
//	case 4:
//		cout << "enter the total seconds it took to detect sound:";
//		cin >> time;
//		if (time > 0 && time <= 30)
//		{
//			distance = 1270 * time;
//			cout << "The total distance covered by sound in hydrogen is:" << distance <<" meters."<< endl;
//		}
//		else
//		{
//			cout << "invalid number of seconds input" << endl;
//		}
//		break;
//	case 5:
//		break;
//	default:
//		cout << "invalid input" << endl;
//		break;
//	}
//
//
//	system("pause");
//	return 0;
//}