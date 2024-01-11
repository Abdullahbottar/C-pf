//#include <iostream>
//using namespace std;
//int main()
//{
//	int sub, hours, vid, views, likeper;
//	cout << "enter the number of subscribers:";
//	cin >> sub;
//	cout << "enter the number of hours viewed:";
//	cin >> hours;
//	cout << "enter the number of number of videos in last year:";
//	cin >> vid;
//	cout << "enter the number of average views on one video:";
//	cin >> views;
//	cout << "enter the number of like percentage:";
//	cin >> likeper;
//
//	if (sub >= 1000 && hours >= 4000 && vid >= 2 && views >= 10 && likeper >= 40 && likeper <= 100)
//	{
//		cout << "the youtube account is monoterised" << endl;
//		if (sub >= 100000 && sub <= 1000000)
//		{
//			cout << "The channel is awarded with silver button." << endl;
//		}
//		if (sub == 1000000)
//		{
//			cout << "The channel is awarded with gold button." << endl;
//		}
//		if (sub > 1000000)
//		{
//			cout << "The channel is awarded with diamond button." << endl;
//		}
//	}
//	else if (sub >= 0 && hours >= 0 && vid >= 0 && views >= 0 && likeper >= 0 && likeper <= 100)
//	{
//		cout << endl;
//		cout << "The account is not monoterised because of:";
//		if (sub < 1000 && sub >= 0)
//		{
//			cout << endl;
//			cout << " less subscribers." << endl;
//		}
//		if (hours < 4000 && hours >= 0)
//		{
//			cout << endl;
//			cout << " less watch hours." << endl;
//		}
//		if (vid < 2 && vid >= 0)
//		{
//			cout << endl;
//			cout << " less videos uploaded." << endl;
//		}
//		if (views < 10 && views >= 0)
//		{
//			cout << endl;
//			cout << " less views on each videos." << endl;
//		}
//		if (likeper < 40 && likeper >= 0)
//		{
//			cout << endl;
//			cout << " less like per view percentage." << endl;
//		}
//	}
//	else
//	{
//		if (sub < 0)
//		{
//			cout << endl;
//			cout << "invalid subscribers input" << endl;
//		}
//		if (hours < 0)
//		{
//			cout << endl;
//			cout << "invalid hours watched input" << endl;
//		}
//		if (vid < 0)
//		{
//			cout << endl;
//			cout << "invalid videos uploaded input" << endl;
//		}
//		if (views < 0)
//		{
//			cout << endl;
//			cout << "invalid views input" << endl;
//		}
//		if (likeper < 0 && likeper > 100)
//		{
//			cout << endl;
//			cout << "invalid likes percentage input" << endl;
//		}
//	}
//		cout << endl;
//	system("pause");
//	return 0;
//}
