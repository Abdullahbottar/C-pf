//#include <iostream>
//using namespace std;
//int main()
//{
//	int month, year;
//	cout << "enter month :";
//	cin >> month;
//	cout << "enter year :";
//	cin >> year;
//	if (year < 0)
//	{
//		cout << "invalid year input." << endl;
//	}
//	if (month > 12)
//	{
//		cout << "invalid month input." << endl;
//	}
//	if (month < 0)
//	{
//		cout << "invalid month input." << endl;
//	}
//	if ((year%100) ==0)
//	{
//		cout << "Year is divisble by 100 " << endl;
//		if ((year % 400) == 0)
//		{
//			cout << "Year is divisble by 100 and is a leap year" << endl;
//			if (month <= 12 && month > 0)
//			{
//				switch (month)
//				{
//				case 1:
//					cout << "Days are 31" << endl;
//					break;
//				case 2:
//					cout << "Days are 29" << endl;
//					break;
//				case 3:
//					cout << "Days are 31" << endl;
//					break;
//				case 4:
//					cout << "Days are 30" << endl;
//					break;
//				case 5:
//					cout << "Days are 31" << endl;
//					break;
//				case 6:
//					cout << "Days are 30" << endl;
//					break;
//				case 7:
//					cout << "Days are 31" << endl;
//					break;
//				case 8:
//					cout << "Days are 31" << endl;
//					break;
//				case 9:
//					cout << "Days are 30" << endl;
//					break;
//				case 10:
//					cout << "Days are 31" << endl;
//					break;
//				case 11:
//					cout << "Days are 30" << endl;
//					break;
//				case 12:
//					cout << "Days are 31" << endl;
//					break;
//				}
//			}
//		}
//
//	}
//	if ((year % 100) != 0)
//	{
//		if ((year % 4) == 0)
//		{
//			cout << "It is a leap year" << endl;
//			if (month <= 12 && month > 0)
//			{
//				switch (month)
//				{
//				case 1:
//					cout << "Days are 31" << endl;
//					break;
//				case 2:
//					cout << "Days are 29" << endl;
//					break;
//				case 3:
//					cout << "Days are 31" << endl;
//					break;
//				case 4:
//					cout << "Days are 30" << endl;
//					break;
//				case 5:
//					cout << "Days are 31" << endl;
//					break;
//				case 6:
//					cout << "Days are 30" << endl;
//					break;
//				case 7:
//					cout << "Days are 31" << endl;
//					break;
//				case 8:
//					cout << "Days are 31" << endl;
//					break;
//				case 9:
//					cout << "Days are 30" << endl;
//					break;
//				case 10:
//					cout << "Days are 31" << endl;
//					break;
//				case 11:
//					cout << "Days are 30" << endl;
//					break;
//				case 12:
//					cout << "Days are 31" << endl;
//					break;
//				}
//			}
//
//		}
//	}
//	if ((year % 4) != 0)
//	{
//		cout << "it is not a leap year" << endl;
//		if (month <= 12 && month > 0)
//		{
//			switch (month)
//			{
//			case 1:
//				cout << "Days are 31" << endl;
//				break;
//			case 2:
//				cout << "Days are 28" << endl;
//				break;
//			case 3:
//				cout << "Days are 31" << endl;
//				break;
//			case 4:
//				cout << "Days are 30" << endl;
//				break;
//			case 5:
//				cout << "Days are 31" << endl;
//				break;
//			case 6:
//				cout << "Days are 30" << endl;
//				break;
//			case 7:
//				cout << "Days are 31" << endl;
//				break;
//			case 8:
//				cout << "Days are 31" << endl;
//				break;
//			case 9:
//				cout << "Days are 30" << endl;
//				break;
//			case 10:
//				cout << "Days are 31" << endl;
//				break;
//			case 11:
//				cout << "Days are 30" << endl;
//				break;
//			case 12:
//				cout << "Days are 31" << endl;
//				break;
//			}
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}