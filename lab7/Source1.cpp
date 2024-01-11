//#include <iostream>
//using namespace std;
//int main()
//{
//	int h;
//	cout << "Enter the hieght of pascals triangle:";
//	cin >> h;
//	if (h < 0)
//	{
//		while (h < 0)
//		{
//			cout << "Enter the correct hieght : ";
//			cin >> h;
//		}
//	}
//	int c = 1;
//	int k = 2;
//	long long int sum = 1;
//	long long int tsum = 1;
//	long long int tvsum = 1;
//	long long int val = 0;
//	for (int i = 1; i <= h; i++)
//	{
//		cout << c;
//		cout << "\t";
//		for (int j = 1; j < i; j++)
//		{
//			for (int l = 1; l <= i; ++l)
//			{
//				sum = (l * sum);
//			}
//			if (i - k <= 0)
//			{
//				tsum = 1;
//			}
//			else
//			{
//				for (int l = 1; l <= (i - k); ++l)
//				{
//					tsum = (l * tsum);
//
//				}
//			}
//			for (int l = 1; l <= k; ++l)
//			{
//				tvsum = (l * tvsum);
//				
//			}
//		    val = (sum) / (tsum * tvsum);
//			cout << val << "\t";
//			++k;
//		}
//		k = 2;
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}