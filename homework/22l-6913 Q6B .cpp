#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout << "Enter motor-cycle:" << endl;
	cout << "pick cotton" << endl;
	string v;
	cout << "Enter 1 motor-cycle:" << endl;
	cout << "Enter 2 car:" << endl;
	cout << "Enter 3 auto:" << endl;
	cout << "Enter 4 bus:" << endl;
	int input;
	cout << "Enter the vehicle type:";
	cin >> input;
	switch (input)
	{
	case 1:
		v = "motor-cycle";
		break;
	case 2:
		v = "car";
		break;

	case 3:
		v = "auto";
		break;

	case 4:
		v = "bus";
		break;
	default:
		cout << "invalid input" << endl;
		break;
	}
	int basef;
	cout << "enter the base fare:";
	cin >> basef;
	int t;
	cout << "enter the time:";
	cin >> t;
	int waitt, jt, d, i;
	cout << "enter waiting time:";
	cin >> waitt;
	cout << "enter journey time:";
	cin >> jt;
	cout << "enter the distance travel in kilometers:";
	cin >> d;
	char p, y, n;
	cout << "do you have a promo code." << endl;
	cout << "press 1 for yes:" << endl;
	cout << "press 2 for no:" << endl;
	cout << "enter your answer:";
	cin >> i;
	switch (i)
	{
	case1:
		p = 'y';
		break;
	case2:
		p = 'n';
		break;
	default:
		cout << "wrong input." << endl;
		break;
	}
	int pmc, pdc;
	cout << "enter the per minute charge:";
	cin >> pmc;
	cout << "enter the per distance charge:";
	cin >> pdc;
	if (p = y)
	{
		int dis;
		cout << "enter the discount on your promo in percentage:";
		cin >> dis;
	}
	else
	{
		cout << "you have no discount." << endl;
	}
	int sr;
	cout << "enter the surge rate:";
	cin >> sr;
	char surge;
	if (t >= 1300 && t <= 1500)
	{
		surge = y;
	}
	else if (t >= 1900 && t <= 2100)
	{
		surge = y;
	}
	else
	{
		surge = n;
	}




	system("pause");
	return 0;
}