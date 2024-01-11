//#include <iostream>
//using namespace std;
//int main()
//{
//	float annuali, sb, nm;
//	cout << "enter annual interest rate: ";
//	cin >> annuali;
//	cout << "enter starting balance: ";
//	cin >> sb;
//	cout << "enter number of months: ";
//	cin >> nm;
//	if (annuali > 100)
//	{
//		while (annuali > 100)
//		{
//			cout << "enter annual interest rate: ";
//			cin >> annuali;
//		}
//	}
//	if (annuali < 0)
//	{
//		while (annuali < 0)
//		{
//			cout << "enter annual interest rate: ";
//			cin >> annuali;
//		}
//	}
//	if (sb < 0)
//	{
//		while (sb < 0)
//		{
//			cout << "enter starting balance: ";
//			cin >> sb;
//		}
//	}
//	if (nm > 12)
//	{
//		while (nm > 12)
//		{
//			cout << "enter number of months: ";
//			cin >> nm;
//		}
//	}
//	if (nm < 0)
//	{
//		while (nm < 0)
//		{
//			cout << "enter number of months: ";
//			cin >> nm;
//		}
//	}
//	float mi = 0;
//	mi = annuali / 12;
//	float nb = 0;
//	float ie = 0, tw = 0, td = 0;
//	if (nm < 13)
//	{
//		float da, wa;
//		for (int i = 1; i <= nm; i++)
//		{
//			cout << "enter the deposited amount in month " << i << " :";
//			cin >> da;
//			cout << "enter the withdrawn amount in month " << i << " :";
//			cin >> wa;
//			if (da < 0)
//			{
//				cout << "\n";
//				while (da < 0)
//				{
//					cout << "enter the deposited amount in month " << i << " :";
//					cin >> da;
//				}
//			}
//			if (wa < 0)
//			{
//				cout << "\n";
//				while (wa < 0)
//				{
//					cout << "enter the withdrawn amount in month " << i << " :";
//					cin >> wa;
//				}
//			}
//			cout << "\n";
//			sb = (sb + da - wa);
//			ie = ie + ((sb * mi) / 100);
//			tw = tw + wa;
//			td = td + da;
//		}
//	}
//	nb = sb;
//	cout << nb << endl;
//	cout << ie << endl;
//	cout << td << endl;
//	cout << tw << endl;
//	system("pause");
//	return 0;
//}