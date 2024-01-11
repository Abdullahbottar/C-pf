//#include <iostream>
//using namespace std;
//int datediff(int y1, int m1, int d1, int y2, int m2, int d2, int& dd, int& md, int& yd)
//{
//	yd = y2 - y1;
//	if (d2 >= 0 || d1 >= 0)
//	{
//		if (d2 < d1)
//		{
//			if (m2 >= 1)
//			{
//				if (y2 % 4 == 0)
//				{
//					if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)
//					{
//						d2 += 31;
//						--m2;
//						dd = d2 - d1;
//					}
//					else if (m2 == 2)
//					{
//						d2 += 29;
//						--m2;
//						dd = d2 - d1;
//					}
//					else
//					{
//						d2 += 30;
//						--m2;
//						dd = d2 - d1;
//					}
//				}
//				else
//				{
//					if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)
//					{
//						d2 += 31;
//						--m2;
//						dd = d2 - d1;
//					}
//					else if (m2 == 2)
//					{
//						d2 += 28;
//						--m2;
//						dd = d2 - d1;
//					}
//					else
//					{
//						d2 += 30;
//						--m2;
//						dd = d2 - d1;
//					}
//				}
//
//			}
//
//		}
//		else
//		{
//			dd = d2 - d1;
//		}
//	}
//	if (m2 >= 1 || m1 >= 1)
//	{
//		if (m2 < m1)
//		{
//			--yd;
//			m2 += 12;
//			md = m2 - m1;
//		}
//		else
//		{
//			md = m2 - m1;
//		}
//	}
//	cout << "day difference is: " << dd << endl;
//	cout << "month difference is: " << md << endl;
//	cout << "year difference is: " << yd << endl;
//
//	return dd, md, yd;
//}
//int main()
//{
//	int day1, month1, month2, day2, year1, year2, yeardif = 0, monthdif = 0, daydif = 0;
//	cout << "Enter day 1:";
//	cin >> day1;
//	cout << "Enter month 1:";
//	cin >> month1;
//	cout << "Enter year 1:";
//	cin >> year1;
//	cout << "Enter day 2:";
//	cin >> day2;
//	cout << "Enter month 2:";
//	cin >> month2;
//	cout << "Enter year 2:";
//	cin >> year2;
//	if (year1 < 0)
//	{
//		while (year1 < 0)
//		{
//			cout << "Enter correct year1:";
//			cin >> year1;
//		}
//	}
//	if (year2 < 0)
//	{
//		while (year2 < 0)
//		{
//			cout << "Enter correct year1:";
//			cin >> year2;
//		}
//	}
//
//	if (month1 > 12 || month1 < 0)
//	{
//		while (month1 > 12 || month1 < 0)
//		{
//			cout << "Enter correct month 1:";
//			cin >> month1;
//		}
//	}
//	if (month2 > 12 || month2 < 0)
//	{
//		while (month2 > 12 || month2 < 0)
//		{
//			cout << "Enter correct month 2:";
//			cin >> month2;
//		}
//	}
//	if (year1 % 4 == 0)
//	{
//		if (month1 == 2)
//		{
//			if (day1 > 29)
//			{
//				while (day1 > 29 || day1 < 0)
//				{
//					cout << "enter correct day 1:";
//					cin >> day1;
//				}
//			}
//		}
//	}
//	if (year2 % 4 == 0)
//	{
//		if (month2 == 2)
//		{
//			if (day2 > 29 || day2 < 0)
//			{
//				while (day2 > 29 || day2 < 0)
//				{
//					cout << "enter correct day 2:";
//					cin >> day2;
//				}
//			}
//		}
//	}
//	if (year1 % 4 != 0)
//	{
//		if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
//		{
//			if (day1 < 0 || day1>31)
//			{
//				while (day1 < 0 || day1>31)
//				{
//					cout << "Enter correct day 1:";
//					cin >> day1;
//				}
//			}
//		}
//		else if (month1 == 2)
//		{
//			if (day1 > 28 || day1 < 0)
//			{
//				while (day1 > 28 || day1 < 0)
//				{
//					cout << "Enter correct day 1:";
//					cin >> day1;
//				}
//			}
//		}
//		else
//		{
//			if (day1 > 30 || day1 < 0)
//			{
//				while (day1 > 30 || day1 < 0)
//				{
//					cout << "Enter correct day 1:";
//					cin >> day1;
//				}
//			}
//		}
//	}
//	if (year2 % 4 != 0)
//	{
//		if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
//		{
//			if (day2 < 0 || day2>31)
//			{
//				while (day2 < 0 || day2>31)
//				{
//					cout << "Enter correct day 2:";
//					cin >> day2;
//				}
//			}
//		}
//		else if (month2 == 2)
//		{
//			if (day2 > 28 || day2 < 0)
//			{
//				while (day2 > 28 || day2 < 0)
//				{
//					cout << "Enter correct day 2:";
//					cin >> day2;
//				}
//			}
//		}
//		else
//		{
//			if (day2 > 30 || day2 < 0)
//			{
//				while (day2 > 30 || day2 < 0)
//				{
//					cout << "Enter correct day 2:";
//					cin >> day2;
//				}
//			}
//		}
//	}
//
//	daydif = datediff(year1, month1, day1, year2, month2, day2, daydif, monthdif, yeardif);
//	cout << daydif << endl;
//
//	return 0;
//
//}