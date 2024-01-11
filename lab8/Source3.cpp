//#include <iostream>
//using namespace std;
//int main()
//{
//	char arr[3][30];
//	cout << "Enter the information for 3 months daily weather:" << endl;
//	char d;
//	int minR = INT_MAX;
//	int maxR = INT_MIN;
//	int g = 0;
//	int v = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		int r = 0;
//		int c = 0;
//		int s = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "Enter wheather update for month " << i << " day " << j << " :";
//			cin >> d;
//			if (d != 'R' || d != 'S' || d != 'C')
//			{
//				while (d != 'R' && d != 'S' && d != 'C')
//				{
//					cout << "Enter correct wheather update for month " << i << " day " << j << " :";
//					cin >> d;
//				}
//			}
//			if (d == 'R')
//			{
//				r++;
//			}
//			if (d == 'S')
//			{
//				s++;
//			}
//			if (d == 'C')
//			{
//				c++;
//			}
//			arr[i][j] = d;
//		}
//		cout << "The number of days sunny in month " << i << " are : " << s << endl;
//		cout << "The number of days rainy in month " << i << " are : " << r << endl;
//		cout << "The number of days cloudy in month " << i << " are : " << c << endl;
//		if (r > maxR)
//		{
//			maxR = r;
//			g = i;
//		}
//		if (r < minR)
//		{
//			minR = r;
//			v = i;
//		}
//	}
//	cout << "The month with most rainy days are " << g << endl;
//	cout << "The month with least rainy days are " << v << endl;
//	cout << "You have entered:" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//
//}