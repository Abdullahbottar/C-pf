//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cout << "enter the number of value:";
//	cin >> n;
//	cout << "\n";
//	int pr = 0;
//	int a = 0, b = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int c;
//		cout << "enter the value in sequence:";
//		cin >> c;
//		if (i >= 2)
//		{
//			if (pr > c)
//			{
//				a++;
//			}
//			else if (pr < c)
//			{
//				b++;
//			}
//		}
//		pr = c;
//
//	}
//	if (a == 0&& b>0)
//	{
//		cout << "strictly increasing." << endl;
//	}
//	else if (b == 0&& a>0)
//	{
//		cout << "strictly decreasing." << endl;
//	}
//	else if (b>0 && a>0)
//	{
//		cout << "niether." << endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}