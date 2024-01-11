//#include <iostream>
//using namespace std;
//int power(int a, int b, int c)
//{
//	bool flag = false;
//	if (b == 0)
//	{
//		if (c == 1)
//		{
//			flag = true;
//		}
//	}
//	if (b == 1)
//	{
//		if (c == a)
//		{
//			flag = true;
//		}
//	}
//	if (b == 2)
//	{
//		if (c == (a * a))
//		{
//			flag == true;
//		}
//	}
//	int sum = (a * a);
//	if (b > 2)
//	{
//		for (int i = 1; i <= (b - 2); i++)
//		{
//			sum *= a;
//		}
//		if (c == sum)
//		{
//			flag = true;
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int a, b, c;
//	cout << "Enter the first number:";
//	cin >> a;
//	cout << "Enter the second number:";
//	cin >> b;
//	cout << "Enter the third number:";
//	cin >> c;
//	if (a < 0)
//	{
//		while (a < 0)
//		{
//			cout << "Enter the correct value of first number:";
//			cin >> a;
//		}
//	}
//	if (b < 0)
//	{
//		while (b < 0)
//		{
//			cout << "Enter the correct value of second number:";
//			cin >> b;
//		}
//	}
//	if (c < 0)
//	{
//		while (c < 0)
//		{
//			cout << "Enter the correct value of third number:";
//			cin >> c;
//		}
//	}
//	bool determine =power(a, b, c);
//	if (determine == 1)
//	{
//		cout << "True" << endl;
//	}
//	else
//	{
//		cout << "False" << endl;
//	}
//	
//
//	cout << endl;
//	return 0;
//}