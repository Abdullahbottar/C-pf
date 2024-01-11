//#include <iostream>
//using namespace std;
//long long int expo(int n)
//{
//	long long int expo = 0;
//	if (n == 1 || n == 2)
//	{
//		expo = 1;
//	}
//	else if (n == 3)
//	{
//		expo = 2;
//	}
//	else
//	{
//		expo = 1;
//		for (int i = (n - 1); i > 0; i--)
//		{
//			expo = expo * i;
//		}
//	}
//	return expo;
//}
//long long int power(int x, int n)
//{
//	long long int power = 1;
//	if (n == 1)
//	{
//		power = 1;
//	}
//	else if (n == 2)
//	{
//		power = x;
//	}
//	else if (n == 3)
//	{
//		power = x * x;
//	}
//	else
//	{
//		power = x * x;
//		for (int i = 1; i <= (n - 3); i++)
//		{
//			power *= x;
//		}
//
//	}
//	return power;
//}
//int main()
//{
//	int x;
//	cout << "Enter the value of x:";
//	cin >> x;
//	if (x < 0)
//	{
//		while (x < 0)
//		{
//			cout << "Enter the correct value of x: ";
//			cin >> x;
//		}
//	}
//	int n;
//	cout << "Enter the value of series limit:";
//	cin >> n;
//	if (n < 0)
//	{
//		while (n < 0)
//		{
//			cout << "Enter the correct value of n: ";
//			cin >> n;
//		}
//	}
//	long double sum = 0;
//	long double value = 0;
//	for (int i = 1; i <= n; i++)
//	{
//	    long double po = power(x, i);
//		long long int fac = expo(i);
//		sum = (po / fac) + sum;
//		value = (po / fac);
//		cout << value;
//		if (i < n)
//		{
//			cout << "+";
//		}
//	}
//	cout << endl;
//	cout << "The sum is: " << sum << endl;
//	return 0;
//}