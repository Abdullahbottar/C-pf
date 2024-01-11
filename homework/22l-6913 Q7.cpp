#include <iostream>
using namespace std;
int main()
{
	int v;
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
		v = 1;
		break;
	case 2:
		v = 2;
		break;

	case 3:
		v = 3;
		break;

	case 4:
		v = 4;
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
	int waitt, jt, d;
	cout << "enter waiting time:";
	cin >> waitt;
	cout << "enter journey time:";
	cin >> jt;
	cout << "enter the distance travel in kilometers:";
	cin >> d;
	int pmc, pdc;
	cout << "enter the per minute charge:";
	cin >> pmc;
	cout << "enter the per distance charge:";
	cin >> pdc;
	int sr;
	cout << "enter the surge rate:";
	cin >> sr;
	float fare, tfare, dfare;
	cout << "do you have a promo code." << endl;
	cout << "press 1 for yes:" << endl;
	cout << "press 2 for no:" << endl;
	int i;
	cout << "enter your answer:";
	cin >> i;
	int dis = 0;
	switch (i)
	{
	case 1:

		cout << "enter the discount on your promo in percentage:";
		cin >> dis;
		break;
	case 2:
		cout << "you have no discount." << endl;
		break;
	default:
		break;
	}
	if (dis > 0)
	{
		if (t >= 1300 && t <= 1500)
		{
			if (waitt > 3)
			{
				fare = basef + (jt * pmc) + (d * pdc) + 50;
				tfare = fare + ((fare * sr) / 100);
				dfare = tfare - ((tfare * dis) / 100);
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare  << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}
			}
			else if (waitt <= 3)
			{
				fare = basef + (jt * pmc) + (d * pdc);
				tfare = fare;
				dfare = tfare - ((tfare * dis) / 100);
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}
			}
		}
		else if (t >= 1900 && t <= 2100)
		{
			if (waitt > 3)
			{
				fare = basef + (jt * pmc) + (d * pdc) + 50;
				tfare = fare + ((fare * sr) / 100);
				dfare = tfare - ((tfare * dis) / 100);
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}

			}
			else if (waitt <= 3)
			{
				fare = basef + (jt * pmc) + (d * pdc);
				tfare = fare;
				dfare = tfare - ((tfare * dis) / 100);
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}
			}
		}
		else
		{
			if (waitt > 3)
			{
				fare = basef + (jt * pmc) + (d * pdc) + 50;
				tfare = fare + ((fare * sr) / 100);
				dfare = tfare - ((tfare * dis) / 100);
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}
			}
			else if (waitt <= 3)
			{
				fare = basef + (jt * pmc) + (d * pdc);
				tfare = fare;
				if (v == 1)
				{
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 2)
				{
					dfare = dfare * 3;
					cout << "The fare is:" << dfare << endl;
				}
				else if (v == 3)
				{
					dfare = dfare * 2;
					cout << "The fare is:" << dfare << endl;
				}
				else
				{
					dfare = dfare * 0.5;
					cout << "The fare is:" << dfare << endl;
				}
			}
		}
	}
	else
	{
	if (t >= 1300 && t <= 1500)
	{
		if (waitt > 3)
		{
			fare = basef + (jt * pmc) + (d * pdc) + 50;
			tfare = fare + ((fare * sr) / 100);
			dfare = tfare;
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}
		}
		else if (waitt <= 3)
		{
			fare = basef + (jt * pmc) + (d * pdc);
			tfare = fare;
			dfare = tfare;
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}
		}
	}
	else if (t >= 1900 && t <= 2100)
	{
		if (waitt > 3)
		{
			fare = basef + (jt * pmc) + (d * pdc) + 50;
			tfare = fare + ((fare * sr) / 100);
			dfare = tfare - ((tfare * dis) / 100);
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}

		}
		else if (waitt <= 3)
		{
			fare = basef + (jt * pmc) + (d * pdc);
			tfare = fare;
			dfare = tfare - ((tfare * dis) / 100);
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}
		}
	}
	else
	{
		if (waitt > 3)
		{
			fare = basef + (jt * pmc) + (d * pdc) + 50;
			tfare = fare + ((fare * sr) / 100);
			dfare = tfare - ((tfare * dis) / 100);
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}
		}
		else if (waitt <= 3)
		{
			fare = basef + (jt * pmc) + (d * pdc);
			tfare = fare;
			if (v == 1)
			{
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 2)
			{
				dfare = dfare * 3;
				cout << "The fare is:" << dfare << endl;
			}
			else if (v == 3)
			{
				dfare = dfare * 2;
				cout << "The fare is:" << dfare << endl;
			}
			else
			{
				dfare = dfare * 0.5;
				cout << "The fare is:" << dfare << endl;
			}
		}
	}

    }
	float taxid, compt, govern;
	taxid = (dfare * 70) / 100;
	compt = (dfare * 20) / 100;
	govern = (dfare * 10) / 100;
	cout << "taxi driver cut is:" << taxid <<". "<< endl;
	cout<<"company cut is:"<< compt << ". " << endl;
	cout<<"goverment cut is:"<<govern << ". " << endl;


	system("pause");
	return 0;
}