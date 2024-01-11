//#include <iostream>
//using namespace std;
//void LCM(int a, int b, int& lcm)
//{
//	int sum;
//	if (a % 2 == 0 && b % 2 == 0)
//	{
//		if (b % a == 0)
//		{
//			sum = b;
//			lcm = b;
//		}
//		else if (a % b == 0)
//		{
//			sum = a;
//			lcm = a;
//		}
//		else
//		{
//			sum = a * b;
//			lcm = sum / 2;
//		}
//	}
//	else if (a % 2 != 0 && b % 2 == 0)
//	{if (b % a == 0)
//		{
//			sum = b;
//			lcm = b;
//		}
//		else if (a % b == 0)
//		{
//			sum = a;
//			lcm = a;
//      }
//		else
//		{
//			lcm = a * b;
//		}
//	}
//	else if (b % 2 != 0 && a % 2 == 0)
//	{
//		if (b % a == 0)
//		{
//			sum = b;
//			lcm = b;
//		}
//		else if (a % b == 0)
//		{
//			sum = a;
//			lcm = a;
//      }
//		else
//		{
//			lcm = a * b;
//		}
//	}
//	else 
//	{
//		if (b % a == 0)
//		{
//			lcm = b;
//		}
//		else if (a % b == 0)
//		{
//			lcm = a;
//		}
//		else
//		{
//			lcm = a * b;
//		}
//	}
//}
//int main()
//{
//	int number1;
//	int number2;
//	cout << "Enter the value of number 1:";
//	cin >> number1;
//	cout << "Enter the value of number 2:";
//	cin >> number2;
//	if (number1 < 0)
//	{
//		while (number1 < 0)
//		{
//			cout << "Enter the correct value of number1:";
//			cin >> number1;
//		}
//	}
//	if (number2 < 0)
//	{
//		while (number2 < 0)
//		{
//			cout << "Enter the correct value of number2:";
//			cin >> number2;
//		}
//	}
//	int lcm = 0;
//	LCM(number1, number2, lcm);
//	cout << "The lcm is: " << lcm << endl;
//
//	return 0;
//}