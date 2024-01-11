//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "Enter the value of binary:";
//	cin >> n;
//	int m = 1;
//	while (m < n)
//	{
//		m *= 10;
//	}
//	int d = m;
//	int c = 0;
//	d /= 10;
//	while (d > 1)
//	{
//		d /= 10;
//		++c;
//	}
//	int j = c + 1;
//	int f = 0;
//	int sum = 0;
//	while (j > 0)
//	{
//		int s = n % m;
//		m /= 10;
//		int v = n % m;
//		s = s - v;
//		s /= m;
//		if (c == 0)
//		{
//			sum = 1;
//		}
//		else if (c == 1)
//		{
//			sum = 2;
//		}
//		else if (c == 2)
//		{
//			sum = 4;
//		}
//		else if (c > 2)
//		{
//			sum = 4;
//			for (int i = 1; i <= (c - 2); i++)
//			{
//				sum *= 2;
//			}
//		}
//		else
//		{
//			break;
//		}
//		f = (sum * s) + f;
//		--c;
//		--j;
//	}
//	cout <<"sumof binary in decimal is: "<< f << endl;
//
//	return 0;
//}