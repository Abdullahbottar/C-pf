//#include <iostream>
//
//using namespace std;
//double fac(int n)
//{
//	float sum = 1;
//	int c = 1;
//	for (int i = n; i > 1; --i)
//	{
//		sum = ((i-1) * i) * sum;
//		--i;
//	}
//	return sum;
//
//	
//}
//double pow(int x, int n)
//{
//	float sum = 0;
//	if (n == 0)
//	{
//		sum = 1;
//	}
//	else if (n == 1)
//	{
//		sum = x;
//	}
//	else if (n == 2)
//	{
//		sum = x * x;
//	}
//	else
//	{
//		sum = x * x;
//		for (int i = 1; i < n - 1; i++)
//		{
//			sum = sum * x;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int x, n;
//	cout << "Enter the value of angle:";
//	cin >> x;
//	cout << "Enter the value of series limit:";
//	cin >> n;
//	if (n % 2 == 0)
//	{
//		
//		while (n % 2 == 0)
//		{
//			cout << "Enter the correct value of series limit:";
//			cin >> n;
//		}
//	}
//    double sum1;
//	double sum2;
//	sum1 = pow(x, n);
//	sum2 = fac(n);
//	cout << sum1 << endl;
//	cout << sum2 << endl;
//	double sumt = 0;
//	int c = n;
//	c += 1;
//	n = 1;
//	for (int i = 1; i <= (c / 2); i++)
//	{
//		
//		if (i % 2 != 0)
//		{
//			sum1 = pow(x, n);
//			sum2 = fac(n);
//			sumt = (sum1 / sum2) + sumt;
//		}
//		else
//		{
//			sum1 = pow(x, n);
//			sum2 = fac(n);
//			sumt = sumt - (sum1 / sum2);
//		}
//		n += 2;
//	}
//	cout << sumt;
//
//
//	cout << endl;
//	return 0;
//}