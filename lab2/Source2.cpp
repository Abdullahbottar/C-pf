//#include <iostream>
//using namespace std;
//int main()
//{
//	int v;
//	cout << "Enter 1 motor-cycle:" << endl;
//	cout << "Enter 2 car:" << endl;
//	cout << "Enter 3 auto:" << endl;
//	cout << "enter the vehicle type:";
//	cin >> v;
//	if (v < 0)
//	{
//		while (v < 0)
//		{
//			cout << "enter correct input:";
//			cin >> v;
//        }
//	}
//	if (v >3 )
//	{
//		while (v > 3)
//		{
//			cout << "enter correct input:";
//			cin >> v;
//		}
//	}
//	float basef,waitt, jt, d, sr, pmc, pdc, t;
//	float fare=0, tfare=0, dfare=0;
//	cout << "enter the base fare:";
//	cin >> basef;
//	cout << "enter the time:";
//	cin >> t;
//	cout << "enter waiting time:";
//	cin >> waitt;
//	cout << "enter journey time:";
//	cin >> jt;
//	cout << "enter the distance travel in kilometers:";
//	cin >> d;
//	cout << "enter the per minute charge:";
//	cin >> pmc;
//	cout << "enter the per distance charge:";
//	cin >> pdc;
//	if (basef < 0)
//	{
//		while (basef < 0)
//		{
//			cout << "enter the base fare:";
//			cin >> basef;
//		}
//	}
//	if (t < 1200)
//	{
//		while (t < 1200)
//		{
//			cout << "enter the time:";
//			cin >> t;
//		}
//	}
//	if (t >2400)
//	{
//		while (t>2400)
//		{
//			cout << "enter the time:";
//			cin >> t;
//		}
//	}
//	if (waitt < 0)
//	{
//		while (waitt < 0)
//		{
//			cout << "enter waiting time:";
//			cin >> waitt;
//		}
//	}
//	if (jt < 0)
//	{
//		while (jt < 0)
//		{
//			cout << "enter journey time:";
//			cin >> jt;
//		}
//	}
//	if (d < 0)
//	{
//		while (d < 0)
//		{
//			cout << "enter the distance travel in kilometers:";
//			cin >> d;
//		}
//	}
//	if (pmc < 0)
//	{
//		while (pmc < 0)
//		{
//			cout << "enter the per minute charge:";
//			cin >> pmc;
//			
//		}
//	}
//	if (pdc < 0)
//	{
//		while (pdc < 0)
//		{
//			cout << "enter the per distance charge:";
//			cin >> pdc;
//		}
//	}
//	if (t > 0)
//	{
//		if (t >= 1300 && t <= 1500)
//		{
//			cout << "enter the surge rate:";
//			cin >> sr;
//		}
//		else if (t >= 1900 && t <= 2100)
//		{
//			cout << "enter the surge rate:";
//			cin >> sr;
//		}
//		else
//		{
//			sr = 0;
//		}
//	}
//	if (sr < 0)
//	{
//		while (sr < 0)
//		{
//			cout << "enter the surge rate:";
//			cin >> sr;
//		}
//	}
//	cout << "do you have a promo code." << endl;
//	cout << "press 1 for yes:" << endl;
//	cout << "press 2 for no:" << endl;
//	int i;
//	cout << "enter your answer:";
//	cin >> i;
//	int dis = 0;
//	float a = 0, b = 0, f = 0, j = 0, e = 0, k = 0;
//	switch (i)
//	{
//	case 1:
//
//		cout << "enter the discount on your promo in percentage:";
//		cin >> dis;
//		break;
//	case 2:
//		cout << "you have no discount." << endl;
//		break;
//	default:
//		break;
//	}
//	if (dis > 0)
//	{
//		if (sr > 0 && t > 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc) + 50;
//			tfare = fare + ((fare * sr) / 100);
//			dfare = tfare - ((tfare * dis) / 100);
//		}
//		else if (sr > 0 && t < 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc);
//			tfare = fare + ((fare * sr) / 100);
//			dfare = tfare - ((tfare * dis) / 100);
//		}
//		else if (sr < 0 && t >3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc) + 50;
//			tfare = fare;
//			dfare = tfare - ((tfare * dis) / 100);
//		}
//		else if (sr < 0 && t < 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc);
//			tfare = fare;
//			dfare = tfare - ((tfare * dis) / 100);
//		}
//	}
//	else if (dis <= 0)
//	{
//		if (sr > 0 && t > 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc) + 50;
//			tfare = fare + ((fare * sr) / 100);
//			dfare = tfare;
//		}
//		else if (sr > 0 && t < 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc);
//			tfare = fare + ((fare * sr) / 100);
//			dfare = tfare;
//		}
//		else if (sr < 0 && t >3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc) + 50;
//			tfare = fare;
//			dfare = tfare;
//		}
//		else if (sr < 0 && t < 3)
//		{
//			fare = basef + (jt * pmc) + (d * pdc);
//			tfare = fare;
//			dfare = tfare;
//		}
//	}
//	if (v > 0 && v < 4)
//	{
//		if (v == 1)
//		{
//			cout << "The fare is:" << dfare << endl;
//		}
//		else if (v == 2)
//		{
//			dfare = dfare * 3;
//			cout << "The fare is:" << dfare << endl;
//		}
//		else 
//		{
//			dfare = dfare * 2;
//			cout << "The fare is:" << dfare << endl;
//		}
//	}
//	float taxid, compt, govern;
//	taxid = (dfare * 70) / 100;
//	compt = (dfare * 20) / 100;
//	govern = (dfare * 10) / 100;
//	cout << "taxi driver cut is:" << taxid << ". " << endl;
//	cout << "company cut is:" << compt << ". " << endl;
//	cout << "goverment cut is:" << govern << ". " << endl;
//	system("pause");
//	return 0;
//}