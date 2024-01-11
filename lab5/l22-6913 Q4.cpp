//#include <iostream>
//using namespace std;
//int main()
//{
//	int h;
//	cout << "enter the height of the prymid:";
//	cin >> h;
//	if (h > 9 || h < 0)
//	{
//		while (h > 9 || h < 0)
//		{
//			cout << "enter the correct height of the prymid:";
//			cin >> h;
//		}
//	}
//	int c = 0;
//	for (int i = 1; i <= h; i++)
//	{
//		for (int j = 1; j <= (h - i)+1; ++j)
//		{
//			cout << j;
//		}
//		for (int l = 2; l <= i; l++)
//		{
//			cout << " ";
//		}
//		for (int g = 3; g <= i; g++)
//		{
//			cout << " ";
//		}
//		for (int k = (h - c); k > 0; --k)
//		{
//			if (k == h)
//			{
//				continue;
//			}
//			else
//			{
//				cout << k;
//			}
//		}
//		cout << endl;
//		++c;
//	}
//
//	return 0;
//}