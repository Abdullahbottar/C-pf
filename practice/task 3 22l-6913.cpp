/*
#include <iostream>
using namespace std;
int main()
{
	int dayb, dayt, monthb, montht, yearb, yeart;
	cout << "enter the day you are born :";
	cin >> dayb;
	cout << endl;
	cout << "enter the month you are born :";
	cin >> monthb;
	cout << endl;
	cout << "enter the year you are born :";
	cin >> yearb;
	cout << endl;
	cout << "enter date today :";
	cin >> dayt;
	cout << endl;
	cout << "enter month today :";
	cin >> montht;
	cout << endl;
	cout << "enter year today :";
	cin >> yeart;
	cout << endl;
	int tdaysy, tdaysm, tdaysd;
	tdaysy = (yeart * 365) - (yearb * 365);
	tdaysm = (montht * 30) - (monthb * 30);
	tdaysd = dayt - dayb;
	int total_days;
	total_days = tdaysy + tdaysm + tdaysd;
	int cyears;
	cyears = total_days / 365;
	int cmonths;
	cmonths = (total_days - (cyears * 365)) / 30;
	int cdays;
	cdays = total_days - (cyears * 365) - (cmonths * 30);
	cout << "your current age is :" << cyears << "years   " << cmonths << "months    " << cdays << "days age." << endl;

	return 0;
}*/