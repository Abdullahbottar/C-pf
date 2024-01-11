#include <iostream>
using namespace std;
int main()
{
	int month, year;
	cout << "enter the month:";
	cin >> month;
	cout << "enter the year :";
	cin >> year;
	if (year > 9999)
	{
		cout << "invalid year input." << endl;
	}
	if (year < 1000)
	{
		cout << "invalid year input." << endl;
	}
	if (month > 12)
	{
		cout << "invalid month input." << endl;
	}
	if (month < 0)
	{
		cout << "invalid month input." << endl;
	}
	else if (month <= 12 && month > 0 && year <= 9999 && year >= 1000)
	{
		cout << "valid date input." << endl;
		switch (month)
		{
		case 1:
			cout << "Days are 31" << endl;
			break;
		case 2:
			cout << "Days are 29" << endl;
			break;
		case 3:
			cout << "Days are 31" << endl;
			break;
		case 4:
			cout << "Days are 30" << endl;
			break;
		case 5:
			cout << "Days are 31" << endl;
			break;
		case 6:
			cout << "Days are 30" << endl;
			break;
		case 7:
			cout << "Days are 31" << endl;
			break;
		case 8:
			cout << "Days are 31" << endl;
			break;
		case 9:
			cout << "Days are 30" << endl;
			break;
		case 10:
			cout << "Days are 31" << endl;
			break;
		case 11:
			cout << "Days are 30" << endl;
			break;
		case 12:
			cout << "Days are 31" << endl;
			break;
		}
		int date;
		cout << "enter a date to find magical date:";
		cin >> date;
		if (date > 31 && date < 0)
		{
			cout << "invalid date input" << endl;
		}
		else
		{
			int magicaly1, magicaly2, magicaly3;
			magicaly1 = (year % 1000);
			magicaly3 = (magicaly1 % 100);
			magicaly2 = date * month;
			if (magicaly3 == magicaly2)
			{
				cout << "magical date:" << date << ":" << month << ":" << year << endl;
			}
			else
			{
				cout << "non-magical date:" << date << ":" << month << ":" << year << endl;
			}
		}
	}
	return 0;
}