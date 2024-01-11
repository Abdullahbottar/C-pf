//#include <iostream>
//using namespace std;
//int expo(int n)
//{
//	float expo = 0;
//	if (n == 1 || n==2)
//	{
//		expo = 1;
//	}
//	else if (n==3)
//	{
//		expo = 2;
//	}
//	else
//	{
//		expo = 1;
//		for (int i = (n-1); i > 0; i--)
//		{
//			expo = expo * i;
//		}
//	}
//	return expo;
//}
//int power(int x,int n)
//{
//	float power = 1;
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
//	int main()
//	{
//		int x;
//		cout << "Enter the value of x:";
//		cin >> x;
//		if (x < 0)
//		{
//			while (x < 0)
//			{
//				cout << "Enter the correct value of x: ";
//				cin >> x;
//			}
//		}
//		int n;
//		cout << "Enter the value of series limit:";
//		cin >> n;
//		if (n < 0)
//		{
//			while (n < 0)
//			{
//				cout << "Enter the correct value of n: ";
//				cin >> n;
//			}
//		}
//		float sum = 0;
//		for (int i = 1; i <= x; i++)
//		{
//			float po = power(x,i);
//			float fac = expo(i);
//			sum = (po / fac) + sum;
//			
//		}
//		cout <<"The sum is: " << sum << endl;
//		return 0;
//	}