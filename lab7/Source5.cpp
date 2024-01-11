//#include <iostream>
//using namespace std;
//int main()
//{
//	int c;
//	cout << "Enter the valueof c:";
//	cin >> c;
//	if (c < 0)
//	{
//		while (c < 0)
//		{
//			cout << "Enter the correct value of c :";
//			cin >>c;
//		}
//	}
//	for (int i = 0; i < c; i++)
//	{
//		float sum = 1;
//		float nrs = 1;
//		float rs = 1;
//		int f = 1;
//		for (int j = 0; j <= i; j++)
//		{
//			for (int l = 0; l <= i; l++)
//			{
//				sum = (f * sum);
//				++f;
//			}
//			if (i - j < 0)
//			{
//				nrs = 1;
//			}
//			else if(i-j>0)
//			{
//				f = 1;
//				for (int l = (i-j); l >= 0; --l)
//				{
//					nrs = (f * nrs);
//					++f;
//				}
//			}
//			if (j == 0)
//			{
//				rs = 1;
//			}
//			else if (j > 0)
//			{
//				f = 1;
//				for (int d = 0; d <= j; d++)
//				{
//					rs = (f * rs);
//					++f;
//				}
//			}
//			float newsum = sum / (nrs * rs);
//			cout << newsum << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}