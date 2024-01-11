//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 2; i++)
//	{
//		int th, tm, cd;
//		int ah = 0;
//		cout << "enter time in hours:";
//		cin >> th;
//		cout << "enter the time in minutes:";
//		cin >> tm;
//		cout << "enter the call duration in minutes:";
//		cin >> cd;
//		int at;
//		at = cd + tm;
//		if (at >= 60)
//		{
//			ah = (at / 60) * 100;
//			ah = ah + th;
//			int a = 0, b = 0;
//			float bill = 0;
//			b = 60 - tm;
//			a = at % 60;
//			if (th < 800 && ah >= 800)
//			{
//				bill = (b * 3.75) + (a * 6);
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th < 1800 && ah >= 1800)
//			{
//				bill = (b * 6) + (a * 3.75);
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th < 1800 && th >= 800)
//			{
//				bill = cd * 6;
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th >= 1800 && ah >= 1800)
//			{
//				bill = cd * 3.75;
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th < 800 && ah < 800)
//			{
//				bill = cd * 3.75;
//				cout << "Your bill is: " << bill << endl;
//			}
//
//
//		}
//		else if (at < 60)
//		{
//			int a = 0, b = 0;
//			float bill = 0;
//			if (th < 800)
//			{
//				bill = cd * 3.75;
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th < 1800 )
//			{
//				bill = cd *6;
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th >= 800)
//			{
//				bill = cd * 6;
//				cout << "Your bill is: " << bill << endl;
//			}
//			else if (th >= 1800)
//			{
//				bill = cd * 3.75;
//				cout << "Your bill is: " << bill << endl;
//			}
//		}
//
//	}
//	system("pause");
//	return 0;
//}